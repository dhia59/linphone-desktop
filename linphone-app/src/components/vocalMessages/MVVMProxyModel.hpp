/*
 * Copyright (c) 2023 Belledonne Communications SARL.
 *
 * This file is part of linphone-desktop
 * (see https://www.linphone.org).
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MVVM_PROXY_MODEL_H_
#define MVVM_PROXY_MODEL_H_

#include "app/proxyModel/SortFilterProxyModel.hpp"
#include <memory>

// =============================================================================

class FileMediaModel;

class MVVMProxyModel : public SortFilterProxyModel {
	Q_OBJECT
	Q_PROPERTY(bool isLoading READ getIsLoading WRITE setIsLoading NOTIFY isLoadingChanged)
   
public:
	MVVMProxyModel ( QObject *parent = Q_NULLPTR);
	void ListMVVM();
	bool setFileCreationTime(const QString& filePath, const QDateTime& creationTime);
	//bool filterAcceptsRow (int sourceRow, const QModelIndex &sourceParent) const override;
	bool lessThan (const QModelIndex &left, const QModelIndex &right) const override;
	Q_INVOKABLE void remove(FileMediaModel * file);
	//Q_INVOKABLE int getCount() const;
	void setIsLoading(const bool &isloading);	
	bool getIsLoading() const;
private:
	bool mIsLoading = false;
signals:
	void isLoadingChanged();
};

	
#endif //MVVM_PROXY_MODEL_H_
