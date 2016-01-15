/*
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

#ifndef _JavaxAnnotationResource_H_
#define _JavaxAnnotationResource_H_

#include "J2ObjC_common.h"
#include "java/lang/Enum.h"
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaxAnnotationResource_AuthenticationType;

/**
 * javax.annotation.Resource annotation. No code was referenced,
 * created using just its public API.
 *
 * These files were generated by j2objc, then the description property's
 * attributes updated to match those in the NSObject protocol (copy added).
 */
@protocol JavaxAnnotationResource < JavaLangAnnotationAnnotation >

@property (readonly) JavaxAnnotationResource_AuthenticationType *authenticationType;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *mappedName;
@property (readonly) NSString *name;
@property (readonly) jboolean shareable;
@property (readonly) IOSClass *type;

@end

@interface JavaxAnnotationResource : NSObject < JavaxAnnotationResource > {
 @private
  JavaxAnnotationResource_AuthenticationType *authenticationType;
  NSString *description;
  NSString *mappedName;
  NSString *name;
  jboolean shareable;
  IOSClass *type;
}

- (instancetype)initWithAuthenticationType:
    (JavaxAnnotationResource_AuthenticationType *)authenticationType_
                           withDescription:(NSString *)description_
                            withMappedName:(NSString *)mappedName_
                                  withName:(NSString *)name_
                             withShareable:(jboolean)shareable_
                                  withType:(IOSClass *)type_;

+ (JavaxAnnotationResource_AuthenticationType *)authenticationTypeDefault;
+ (NSString *)descriptionDefault;
+ (NSString *)mappedNameDefault;
+ (NSString *)nameDefault;
+ (jboolean)shareableDefault;
+ (IOSClass *)typeDefault;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationResource)

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationResource)

typedef NS_ENUM(NSUInteger, JavaxAnnotationResource_AuthenticationType_Enum) {
  JavaxAnnotationResource_AuthenticationType_Enum_APPLICATION = 0,
  JavaxAnnotationResource_AuthenticationType_Enum_CONTAINER = 1,
};

@interface JavaxAnnotationResource_AuthenticationType : JavaLangEnum < NSCopying >

#pragma mark Package-Private

+ (IOSObjectArray *)values;

+ (JavaxAnnotationResource_AuthenticationType *)valueOfWithNSString:(NSString *)name;

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(JavaxAnnotationResource_AuthenticationType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaxAnnotationResource_AuthenticationType *
    JavaxAnnotationResource_AuthenticationType_values_[];

inline JavaxAnnotationResource_AuthenticationType *
    JavaxAnnotationResource_AuthenticationType_get_APPLICATION();
J2OBJC_ENUM_CONSTANT(JavaxAnnotationResource_AuthenticationType, APPLICATION)

inline JavaxAnnotationResource_AuthenticationType *
    JavaxAnnotationResource_AuthenticationType_get_CONTAINER();
J2OBJC_ENUM_CONSTANT(JavaxAnnotationResource_AuthenticationType, CONTAINER)

FOUNDATION_EXPORT IOSObjectArray *JavaxAnnotationResource_AuthenticationType_values();

FOUNDATION_EXPORT JavaxAnnotationResource_AuthenticationType *
    JavaxAnnotationResource_AuthenticationType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaxAnnotationResource_AuthenticationType *
    JavaxAnnotationResource_AuthenticationType_fromNative(
        JavaxAnnotationResource_AuthenticationType_Enum nativeValue);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationResource_AuthenticationType)

#endif // _JavaxAnnotationResource_H_
