//
//  RCTThemis.h
//  ThemisExample
//
//  Created by Oleksii Radetskyi on 04.11.2021.
//

#ifndef RCTThemis_h
#define RCTThemis_h

#import <React/RCTBridgeModule.h>

#define BYTEOVERFLOW        255
#define CONTEXTREQUIRED     254
#define PUBLICKEYREQUIRED   253
#define PRIVATEKEYREQUIRED  252
#define DESERIALIZE_ERROR   251
#define CELL_SEAL_NIL_ERROR  250

#define BYTEOVERFLOWREASON        "Byte overflow: value is out of range"
#define CONTEXTREQUIREDREASON     "Context required"
#define PUBLICKEYREQUIREDREASON   "Public key can not be null or blank"
#define PRIVATEKEYREQUIREDREASON  "Private key can not be null or blank"
#define DESERIALIZE_ERRORREASON   "Deserialize error: empty data"
#define CELL_SEAL_RETURNED_NIL    "Cell seal constructor returned nil"

#define KEYTYPE_EC  0
#define KEYTYPE_RSA 1


@interface RCTThemis : NSObject <RCTBridgeModule>
@end

#endif /* RCTThemis_h */
