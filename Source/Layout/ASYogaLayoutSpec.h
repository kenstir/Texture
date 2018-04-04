//
//  ASYogaLayoutSpec.h
//  Texture
//
//  Copyright (c) 2017-present, Pinterest, Inc.  All rights reserved.
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//

#import <AsyncDisplayKit/ASAvailability.h>

#if YOGA /* YOGA */

#import <Foundation/Foundation.h>
#import <AsyncDisplayKit/ASDisplayNode.h>
#import <AsyncDisplayKit/ASLayoutSpec.h>

NS_ASSUME_NONULL_BEGIN

@interface ASYogaLayoutSpec : ASLayoutSpec
@property (nonatomic) ASDisplayNode *rootNode;
@end

NS_ASSUME_NONULL_END

#endif /* YOGA */
