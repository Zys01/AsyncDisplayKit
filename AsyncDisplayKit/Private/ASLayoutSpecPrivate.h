//
//  ASLayoutSpecPrivate.h
//  AsyncDisplayKit
//
//  Created by Michael Schneider on 9/15/16.
//
//  Copyright (c) 2014-present, Facebook, Inc.  All rights reserved.
//  This source code is licensed under the BSD-style license found in the
//  LICENSE file in the root directory of this source tree. An additional grant
//  of patent rights can be found in the PATENTS file in the same directory.
//


#import "ASInternalHelpers.h"
#import "ASEnvironmentInternal.h"
#import "ASThread.h"

@interface ASLayoutSpec() {
  ASDN::RecursiveMutex __instanceLock__;
  ASEnvironmentState _environmentState;
  ASLayoutableStyle *_style;
  NSMutableArray *_childrenArray;
}
@end

