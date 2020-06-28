//
//  HIDPS2KeyboardWrapper.h
//  HIDPS2Keyboard
//
//  Created by Christopher Luu on 10/7/15.
//  Copyright © 2015 Alexandre Daoud. All rights reserved.
//

#ifndef HIDPS2KeyboardWrapper_h
#define HIDPS2KeyboardWrapper_h

#include "LegacyIOHIDDevice.h"

class HIDPS2KeyboardWrapper : public IOHIDDevice
{
    OSDeclareDefaultStructors(HIDPS2KeyboardWrapper)

public:
    virtual bool start(IOService *provider) APPLE_KEXT_OVERRIDE;
    
    virtual IOReturn setProperties(OSObject *properties) APPLE_KEXT_OVERRIDE;
    
    virtual IOReturn newReportDescriptor(IOMemoryDescriptor **descriptor) const APPLE_KEXT_OVERRIDE;
    
    virtual IOReturn setReport(IOMemoryDescriptor *report,IOHIDReportType reportType,IOOptionBits options=0) APPLE_KEXT_OVERRIDE;
    virtual IOReturn getReport(IOMemoryDescriptor *report,IOHIDReportType reportType,IOOptionBits options) APPLE_KEXT_OVERRIDE;
    
    virtual OSString* newManufacturerString() const APPLE_KEXT_OVERRIDE;
    virtual OSNumber* newPrimaryUsageNumber() const APPLE_KEXT_OVERRIDE;
    virtual OSNumber* newPrimaryUsagePageNumber() const APPLE_KEXT_OVERRIDE;
    virtual OSNumber* newProductIDNumber() const APPLE_KEXT_OVERRIDE;
    virtual OSString* newProductString() const APPLE_KEXT_OVERRIDE;
    virtual OSString* newSerialNumberString() const APPLE_KEXT_OVERRIDE;
    virtual OSString* newTransportString() const APPLE_KEXT_OVERRIDE;
    virtual OSNumber* newVendorIDNumber() const APPLE_KEXT_OVERRIDE;
    
    virtual OSNumber* newLocationIDNumber() const APPLE_KEXT_OVERRIDE;
};

#endif /* HIDPS2KeyboardWrapper_h */
