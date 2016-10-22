/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#include "SWGOrder.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGOrder::SWGOrder(QString* json) {
    init();
    this->fromJson(*json);
}

SWGOrder::SWGOrder() {
    init();
}

SWGOrder::~SWGOrder() {
    this->cleanup();
}

void
SWGOrder::init() {
    id = 0L;
pet_id = 0L;
quantity = 0;
ship_date = NULL;
status = new QString("");
complete = false;
}

void
SWGOrder::cleanup() {
    


if(ship_date != NULL) {
        delete ship_date;
    }
if(status != NULL) {
        delete status;
    }

}

SWGOrder*
SWGOrder::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGOrder::fromJsonObject(QJsonObject &pJson) {
    setValue(&id, pJson["id"], "qint64", "");
setValue(&pet_id, pJson["pet_id"], "qint64", "");
setValue(&quantity, pJson["quantity"], "qint32", "");
setValue(&ship_date, pJson["ship_date"], "QDateTime", "QDateTime");
setValue(&status, pJson["status"], "QString", "QString");
setValue(&complete, pJson["complete"], "bool", "");
}

QString
SWGOrder::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGOrder::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    obj->insert("id", QJsonValue(id));
obj->insert("pet_id", QJsonValue(pet_id));
obj->insert("quantity", QJsonValue(quantity));

    
    toJsonValue(QString("ship_date"), ship_date, obj, QString("QDateTime"));
    
        

    
    toJsonValue(QString("status"), status, obj, QString("QString"));
    
        
obj->insert("complete", QJsonValue(complete));

    return obj;
}

qint64
SWGOrder::getId() {
    return id;
}
void
SWGOrder::setId(qint64 id) {
    this->id = id;
}

qint64
SWGOrder::getPetId() {
    return pet_id;
}
void
SWGOrder::setPetId(qint64 pet_id) {
    this->pet_id = pet_id;
}

qint32
SWGOrder::getQuantity() {
    return quantity;
}
void
SWGOrder::setQuantity(qint32 quantity) {
    this->quantity = quantity;
}

QDateTime*
SWGOrder::getShipDate() {
    return ship_date;
}
void
SWGOrder::setShipDate(QDateTime* ship_date) {
    this->ship_date = ship_date;
}

QString*
SWGOrder::getStatus() {
    return status;
}
void
SWGOrder::setStatus(QString* status) {
    this->status = status;
}

bool
SWGOrder::getComplete() {
    return complete;
}
void
SWGOrder::setComplete(bool complete) {
    this->complete = complete;
}



} /* namespace Swagger */
