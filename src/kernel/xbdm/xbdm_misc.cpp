/**
 ******************************************************************************
 * Xenia : Xbox 360 Emulator Research Project                                 *
 ******************************************************************************
 * Copyright 2025 Xenia Canary. All rights reserved.
 * Released under the BSD license - see LICENSE in the root for more details. *
 ******************************************************************************
 *
 * @modified    Joseph Lee; 2026 - Adapted for ReXGlue runtime
 */

#include <rex/kernel/xbdm/private.h>
#include <rex/logging.h>
#include <rex/hook.h>
#include <rex/types.h>

#include <cstring>

REX_EXPORT_STUB(__imp__DmAllocatePool);
REX_EXPORT_STUB(__imp__DmAllocatePoolWithTag);
REX_EXPORT_STUB(__imp__DmCloseCounters);
REX_EXPORT_STUB(__imp__DmCloseModuleSections_);
REX_EXPORT_STUB(__imp__DmCloseNotificationSession);
REX_EXPORT_STUB(__imp__DmContinueThread);
REX_EXPORT_STUB(__imp__DmFreePool);
REX_EXPORT_STUB(__imp__DmGetMemory);
REX_EXPORT_STUB(__imp__DmGetModuleLongName);
REX_EXPORT_STUB(__imp__DmGetProcAddress);
REX_EXPORT_STUB(__imp__DmGetThreadContext);
REX_EXPORT_STUB(__imp__DmGo);
REX_EXPORT_STUB(__imp__DmHaltThread);
REX_EXPORT_STUB(__imp__DmIsDebuggerPresent);
REX_EXPORT_STUB(__imp__DmIsThreadStopped);
REX_EXPORT_STUB(__imp__DmLoadExtension);
REX_EXPORT_STUB(__imp__DmNotify);
REX_EXPORT_STUB(__imp__DmOpenNotificationSession);
REX_EXPORT_STUB(__imp__DmRegisterNotificationProcessor);
REX_EXPORT_STUB(__imp__DmRegisterPerformanceCounter);
REX_EXPORT_STUB(__imp__DmRemoveBreakpoint);
REX_EXPORT_STUB(__imp__DmResumeThread);
REX_EXPORT_STUB(__imp__DmSetBreakpoint);
REX_EXPORT_STUB(__imp__DmSetDataBreakpoint);
REX_EXPORT_STUB(__imp__DmSetInitialBreakpoint);
REX_EXPORT_STUB(__imp__DmSetMemory);
REX_EXPORT_STUB(__imp__DmSetThreadContext);
REX_EXPORT_STUB(__imp__DmSetTitle);
REX_EXPORT_STUB(__imp__DmSetXboxName);
REX_EXPORT_STUB(__imp__DmStop);
REX_EXPORT_STUB(__imp__DmStopOn);
REX_EXPORT_STUB(__imp__DmSuspendThread);
REX_EXPORT_STUB(__imp__DmThreadUserData);
REX_EXPORT_STUB(__imp__DmUnloadExtension);
REX_EXPORT_STUB(__imp__DmWalkModuleSections);
REX_EXPORT_STUB(__imp__DmWalkPerformanceCounters);
REX_EXPORT_STUB(__imp__DmCloseCounters_0);
REX_EXPORT_STUB(__imp__DmIsBreakpoint);
REX_EXPORT_STUB(__imp__DmCloseCounters_1);
REX_EXPORT_STUB(__imp__DmSetUserAccess);
REX_EXPORT_STUB(__imp__DmGetUserAccess);
REX_EXPORT_STUB(__imp__DmWalkUserList);
REX_EXPORT_STUB(__imp__DmAddUser);
REX_EXPORT_STUB(__imp__DmEnableSecurity);
REX_EXPORT_STUB(__imp__DmIsSecurityEnabled);
REX_EXPORT_STUB(__imp__DmRemoveUser);
REX_EXPORT_STUB(__imp____CAP_Start_Profiling);
REX_EXPORT_STUB(__imp____CAP_End_Profiling);
REX_EXPORT_STUB(__imp____CAP_Enter_Function);
REX_EXPORT_STUB(__imp____CAP_Exit_Function);
REX_EXPORT_STUB_RETURN(__imp__DmRegisterCommandProcessorEx, 0);
REX_EXPORT_STUB(__imp__DmStartProfiling);
REX_EXPORT_STUB(__imp__DmStopProfiling);
REX_EXPORT_STUB(__imp__DmQueryMemoryStatistics);
REX_EXPORT_STUB(__imp__DmEnableStackTrace);
REX_EXPORT_STUB(__imp__DmQueryAllocationTypeName);
REX_EXPORT_STUB(__imp__DmRegisterAllocationType);
REX_EXPORT_STUB(__imp__DmInsertAllocationEntry);
REX_EXPORT_STUB(__imp__DmRemoveAllocationEntry);
REX_EXPORT_STUB(__imp__DmSetTitleEx);
REX_EXPORT_STUB(__imp__DmCrashDump);
REX_EXPORT_STUB(__imp__DmIsFastCAPEnabled);
REX_EXPORT_STUB(__imp__DmGetFileAccessCount);
REX_EXPORT_STUB(__imp__DmGetUtilityDriveInfo);
REX_EXPORT_STUB(__imp__DmSetProfilingOptions);
REX_EXPORT_STUB(__imp__DmQuerySystemSettings);
REX_EXPORT_STUB(__imp__DmSaveSystemSettings);
REX_EXPORT_STUB(__imp__DmpGetPgoModuleHandleForBaseAddress);
REX_EXPORT_STUB(__imp__DmpOnPgoModuleLoad);
REX_EXPORT_STUB(__imp__DmPgoStartDataCollection);
REX_EXPORT_STUB(__imp__DmPgoStopDataCollection);
REX_EXPORT_STUB(__imp__DmPgoSaveSnapshot);
REX_EXPORT_STUB(__imp__IrtClientAbort);
REX_EXPORT_STUB(__imp__IrtPogoInit);
REX_EXPORT_STUB(__imp__IrtSetStaticInfo);
REX_EXPORT_STUB(__imp__IrtAutoSweepW);
REX_EXPORT_STUB(__imp__IrtAutoSweepA);
REX_EXPORT_STUB(__imp__DmGetDumpMode);
REX_EXPORT_STUB(__imp__DmSetDumpMode);
REX_EXPORT_STUB(__imp__DmGetDumpSettings);
REX_EXPORT_STUB(__imp__DmSetDumpSettings);
REX_EXPORT_STUB(__imp__DmGetEventDeferFlags);
REX_EXPORT_STUB(__imp__DmSetEventDeferFlags);
REX_EXPORT_STUB(__imp__DmWalkCommittedMemory);
REX_EXPORT_STUB(__imp__DmCloseCounters_2);
REX_EXPORT_STUB(__imp__DmRebootEx);
REX_EXPORT_STUB(__imp__DmMountFdfxVolume);
REX_EXPORT_STUB(__imp__DmCapGetFileHeader);
REX_EXPORT_STUB(__imp__DmCapFreeFileHeader);
REX_EXPORT_STUB(__imp__DmGetConsoleType);
REX_EXPORT_STUB(__imp__DmWalkLoadedModulesEx);
REX_EXPORT_STUB(__imp__DmGetXexHeaderField);
REX_EXPORT_STUB(__imp__DmGetMouseChanges);
REX_EXPORT_STUB(__imp__DmGetProfilingStatus);
REX_EXPORT_STUB(__imp__DmOpticalDiscLogStart);
REX_EXPORT_STUB(__imp__DmOpticalDiscLogStop);
REX_EXPORT_STUB(__imp__DmStartSamplingProfiler);
REX_EXPORT_STUB(__imp__DmStopSamplingProfiler);
REX_EXPORT_STUB(__imp__DmGetSamplingProfilerInfo);
REX_EXPORT_STUB(__imp__DmStartFileEventCapture);
REX_EXPORT_STUB(__imp__DmStopFileEventCapture);
REX_EXPORT_STUB(__imp__DmSetFileEventMarker);
REX_EXPORT_STUB(__imp__DmMarkPseudoCreateBegin);
REX_EXPORT_STUB(__imp__DmMarkPseudoCreateEnd);
REX_EXPORT_STUB(__imp__DmMarkPseudoEventBegin);
REX_EXPORT_STUB(__imp__DmMarkPseudoEventEnd);
REX_EXPORT_STUB(__imp__DmMarkFileEventWorkerThreadBegin);
REX_EXPORT_STUB(__imp__DmMarkFileEventWorkerThreadEnd);
REX_EXPORT_STUB(__imp__DmAbortProfiling);
REX_EXPORT_STUB(__imp__DmNetCaptureStart);
REX_EXPORT_STUB(__imp__DmNetCaptureStop);
REX_EXPORT_STUB(__imp__DmAutomationGetInputProcess);
REX_EXPORT_STUB(__imp__DmAutomationBindController);
REX_EXPORT_STUB(__imp__DmAutomationUnbindController);
REX_EXPORT_STUB(__imp__DmAutomationConnectController);
REX_EXPORT_STUB(__imp__DmAutomationDisconnectController);
REX_EXPORT_STUB(__imp__DmAutomationSetGamepadState);
REX_EXPORT_STUB(__imp__DmAutomationQueueGamepadState);
REX_EXPORT_STUB(__imp__DmAutomationClearGamepadQueue);
REX_EXPORT_STUB(__imp__DmAutomationQueryGamepadQueue);
REX_EXPORT_STUB(__imp__DmAutomationGetUserDefaultProfile);
REX_EXPORT_STUB(__imp__DmAutomationSetUserDefaultProfile);
REX_EXPORT_STUB(__imp__DmTraceIsRecording);
REX_EXPORT_STUB(__imp__DmLoadDebuggerExtension);
REX_EXPORT_STUB(__imp__DmUnloadDebuggerExtension);
REX_EXPORT_STUB(__imp__DmCreateSystemThread);
REX_EXPORT_STUB(__imp__PEPLELookup);
REX_EXPORT_STUB(__imp__PEPLELookupCompact);
REX_EXPORT_STUB(__imp__PVPLELookup);
REX_EXPORT_STUB(__imp__PVPLELookupCompact);
REX_EXPORT_STUB(__imp__PVPLELookupCompactMDS);
REX_EXPORT_STUB(__imp__PVPLEFilteredLookup);
REX_EXPORT_STUB(__imp__PVPLEFilteredLookupCompact);
REX_EXPORT_STUB(__imp__PVPLEFilteredLookupCompactMDS);
REX_EXPORT_STUB(__imp__PVPLETemplatedLookup);
REX_EXPORT_STUB(__imp__PVPLETemplatedLookupCompact);
REX_EXPORT_STUB(__imp__PVPLETemplatedLookupCompactMDS);
REX_EXPORT_STUB(__imp__DmpPgoCounterOverflow);
REX_EXPORT_STUB(__imp__UpdateMDSProbeState);
REX_EXPORT_STUB(__imp__DmGetHttpRegistration);
REX_EXPORT_STUB(__imp__DmPMCInstallAndStart);
REX_EXPORT_STUB(__imp__DmPMCStopAndReport);
REX_EXPORT_STUB(__imp__DmPMCInstallSetup);
REX_EXPORT_STUB(__imp__DmPMCUnInstallSetup);
REX_EXPORT_STUB(__imp__DmPMCResetCounters);
REX_EXPORT_STUB(__imp__DmPMCSetTriggerProcessor);
REX_EXPORT_STUB(__imp__DmPMCStart);
REX_EXPORT_STUB(__imp__DmPMCStop);
REX_EXPORT_STUB(__imp__DmPMCGetCounter);
REX_EXPORT_STUB(__imp__DmPMCGetCounters);
REX_EXPORT_STUB(__imp__DmPMCGetCounterName);
REX_EXPORT_STUB(__imp__DmPMCDumpCounters);
REX_EXPORT_STUB(__imp__DmPMCDumpCountersVerbose);
REX_EXPORT_STUB(__imp__DmPMCGetCounterCostEstimate);
REX_EXPORT_STUB(__imp__DmPMCGetCounterSource);
REX_EXPORT_STUB(__imp__DmPMCComputeFrequency);
REX_EXPORT_STUB(__imp__DmGetAdditionalTitleMemorySetting);
REX_EXPORT_STUB(__imp__DmGetDebugMemorySize);
REX_EXPORT_STUB(__imp__DmGetConsoleDebugMemoryStatus);
REX_EXPORT_STUB(__imp__DmNetSimSetLinkStatusHidden);
REX_EXPORT_STUB(__imp__DmNetSimInsertQueue);
REX_EXPORT_STUB(__imp__DmNetSimRemoveQueue);
REX_EXPORT_STUB(__imp__DmNetSimRemoveAllQueues);
REX_EXPORT_STUB(__imp__DmNetSimModifyQueueSettings);
REX_EXPORT_STUB(__imp__DmGetConsoleFeatures);
REX_EXPORT_STUB(__imp__DmNetSimGetQueueStats);
REX_EXPORT_STUB(__imp__DmNetSimGetQueueSettings);
REX_EXPORT_STUB(__imp__DmNetSimGetNumQueues);
REX_EXPORT_STUB(__imp__DmNetSimInsertIpv4Redirect);
REX_EXPORT_STUB(__imp__DmNetSimRemoveIpv4Redirect);
REX_EXPORT_STUB(__imp__DmNetSimGetNumIpv4Redirects);
REX_EXPORT_STUB(__imp__XLFAllocate);
REX_EXPORT_STUB(__imp__XLFFree);
REX_EXPORT_STUB(__imp__XLFQueueAdd);
REX_EXPORT_STUB(__imp__XLFQueueAllocated);
REX_EXPORT_STUB(__imp__XLFQueueCreate);
REX_EXPORT_STUB(__imp__XLFQueueDestroy);
REX_EXPORT_STUB(__imp__XLFQueueGetEntryCount);
REX_EXPORT_STUB(__imp__XLFQueueIsEmpty);
REX_EXPORT_STUB(__imp__XLFQueueRemove);
REX_EXPORT_STUB(__imp__XLFQueueUnsafeDump);
REX_EXPORT_STUB(__imp__XLFStackAllocated);
REX_EXPORT_STUB(__imp__XLFStackCreate);
REX_EXPORT_STUB(__imp__XLFStackDestroy);
REX_EXPORT_STUB(__imp__XLFStackGetEntryCount);
REX_EXPORT_STUB(__imp__XLFStackIsEmpty);
REX_EXPORT_STUB(__imp__XLFStackPop);
REX_EXPORT_STUB(__imp__XLFStackPush);
REX_EXPORT_STUB(__imp__XLFStackUnsafeDump);
REX_EXPORT_STUB(__imp__XLFPriorityQueueAdd);
REX_EXPORT_STUB(__imp__XLFPriorityQueueAllocated);
REX_EXPORT_STUB(__imp__XLFPriorityQueueCreate);
REX_EXPORT_STUB(__imp__XLFPriorityQueueDestroy);
REX_EXPORT_STUB(__imp__XLFPriorityQueueGetEntryCount);
REX_EXPORT_STUB(__imp__XLFPriorityQueueIsEmpty);
REX_EXPORT_STUB(__imp__XLFPriorityQueueRemoveFirst);
REX_EXPORT_STUB(__imp__XLFPriorityQueueRemove);
REX_EXPORT_STUB(__imp__XLFPriorityQueueUnsafeDump);
REX_EXPORT_STUB(__imp__XLFHashTableAdd);
REX_EXPORT_STUB(__imp__XLFHashTableAllocated);
REX_EXPORT_STUB(__imp__XLFHashTableCreate);
REX_EXPORT_STUB(__imp__XLFHashTableDestroy);
REX_EXPORT_STUB(__imp__XLFHashTableGetEntryCount);
REX_EXPORT_STUB(__imp__XLFHashTableIsEmpty);
REX_EXPORT_STUB(__imp__XLFHashTableRemoveFirst);
REX_EXPORT_STUB(__imp__XLFHashTableRemove);
REX_EXPORT_STUB(__imp__XLFHashTableUnsafeDump);
REX_EXPORT_STUB(__imp__XLFPoolAcquireLock);
REX_EXPORT_STUB(__imp__XLFPoolAllocated);
REX_EXPORT_STUB(__imp__XLFPoolCreate);
REX_EXPORT_STUB(__imp__XLFPoolCreateLock);
REX_EXPORT_STUB(__imp__XLFPoolDestroy);
REX_EXPORT_STUB(__imp__XLFPoolDestroyLock);
REX_EXPORT_STUB(__imp__XLFPoolIncreaseEvents);
REX_EXPORT_STUB(__imp__XLFPoolIncreaseLocks);
REX_EXPORT_STUB(__imp__XLFPoolInitializeLock);
REX_EXPORT_STUB(__imp__XLFPoolNumberOfEvents);
REX_EXPORT_STUB(__imp__XLFPoolNumberOfLocks);
REX_EXPORT_STUB(__imp__XLFPoolReleaseLock);
REX_EXPORT_STUB(__imp__XLFStartLog);
REX_EXPORT_STUB(__imp__XLFStartUserLog);
REX_EXPORT_STUB(__imp__XLFInitializeLog);
REX_EXPORT_STUB(__imp__XLFInitializeUserLog);
REX_EXPORT_STUB(__imp__XLFEndLog);
REX_EXPORT_STUB(__imp__XLFLogPrint);
REX_EXPORT_STUB(__imp__XLFLogPrintV);
REX_EXPORT_STUB(__imp__XLFLogBuffer);
REX_EXPORT_STUB(__imp__XLFLogMessageStats);
REX_EXPORT_STUB(__imp__XLockFreeGetErrorHandler);
REX_EXPORT_STUB(__imp__XLockFreeSetErrorHandler);
REX_EXPORT_STUB(__imp__DmExecuteThreadRPC);
REX_EXPORT_STUB(__imp__DmGetDebuggerConnection);

// Project Haggar (n-Space's UE3 build) asserts when xbdm calls fail, so the
// imports it uses return Xenia's values (src/xenia/kernel/xbdm, BSD) instead
// of leaving r3 untouched.
namespace rex::kernel::xbdm {
namespace {
constexpr u32 kXbdmSuccessful = 0x02DA0000;
constexpr u32 kXbdmUnsuccessful = 0x82DA0000;
constexpr u32 kXbdmEndOfList = 0x82DA0104;
constexpr u32 kXbdmBufferTooSmall = 0x82DA0105;
constexpr u32 kInvalidArg = 0x80070057;
constexpr u32 kErrorInvalidParameter = 0x00000057;
constexpr u32 kMaxFramesToCapture = 256;
constexpr char kXboxName[] = "Xbox360Name";
constexpr size_t kDmXbeSize = 276, kDmnModuleLoadSize = 292, kDmPdbSignatureSize = 280;
constexpr size_t kDmThreadInfoExSize = 52;

void StoreBE16(uint8_t* p, uint16_t v) { p[0] = uint8_t(v >> 8); p[1] = uint8_t(v); }
}  // namespace

u32 DmRegisterCommandProcessor_entry(mapped_string name, mapped_u32 handler) {
  return name ? kXbdmSuccessful : kInvalidArg;
}
u32 DmSendNotificationString_entry(mapped_string text) {
  return text ? kXbdmSuccessful : kInvalidArg;
}
u32 DmGetXboxName_entry(mapped_string name, mapped_u32 size) {
  if (!name || !size)
    return kInvalidArg;
  if (sizeof(kXboxName) > *size)
    return kXbdmBufferTooSmall;
  std::memcpy(name.host_address(), kXboxName, sizeof(kXboxName));
  return kXbdmSuccessful;
}
u32 DmCaptureStackBackTrace_entry(u32 frames, mapped_u32 trace) {
  if (frames > kMaxFramesToCapture)
    return kInvalidArg;
  if (trace)
    std::memset(trace.host_address(), 0, frames * sizeof(uint32_t));
  return kXbdmSuccessful;
}
u32 DmWalkLoadedModules_entry(mapped_u32 walk, mapped_void module_load) {
  if (!walk || !module_load)
    return kInvalidArg;
  module_load.Zero(kDmnModuleLoadSize);
  return kXbdmEndOfList;  // some games loop forever on anything else
}
u32 DmCloseLoadedModules_entry(mapped_u32 walk) { return kXbdmSuccessful; }
u32 DmFindPdbSignature_entry(mapped_void base, mapped_void signature) {
  if (!base || !signature)
    return kInvalidArg;
  signature.Zero(kDmPdbSignatureSize);
  return kErrorInvalidParameter;
}
u32 DmGetXbeInfo_entry(mapped_string name, mapped_void xbe) {
  if (!xbe)
    return kInvalidArg;
  xbe.Zero(kDmXbeSize);
  return kXbdmSuccessful;
}
u32 DmGetSystemInfo_entry(mapped_void info) {
  if (!info)
    return kInvalidArg;
  // size (u32), then base kernel, kernel and XDK versions (major, minor,
  // build, qfe as u16), then flags.
  auto* p = static_cast<uint8_t*>(info.host_address());
  for (int v = 0; v < 2; ++v) {
    StoreBE16(p + 4 + v * 8 + 0, 2);
    StoreBE16(p + 4 + v * 8 + 2, 0);
    StoreBE16(p + 4 + v * 8 + 4, 1888);
    StoreBE16(p + 4 + v * 8 + 6, 0);
  }
  return kXbdmSuccessful;
}
u32 DmMapDevkitDrive_entry() { return 0; }
u32 DmGetThreadInfoEx_entry(u32 thread_id, mapped_void info) {
  if (!info)
    return kInvalidArg;
  info.Zero(kDmThreadInfoExSize);
  return kXbdmUnsuccessful;
}
u32 DmFailed_entry() { return kXbdmUnsuccessful; }
u32 DmQueryTitleMemoryStatistics_entry(mapped_void stats) { return kXbdmUnsuccessful; }

}  // namespace rex::kernel::xbdm

REX_EXPORT(__imp__DmRegisterCommandProcessor, rex::kernel::xbdm::DmRegisterCommandProcessor_entry)
REX_EXPORT(__imp__DmSendNotificationString, rex::kernel::xbdm::DmSendNotificationString_entry)
REX_EXPORT(__imp__DmGetXboxName, rex::kernel::xbdm::DmGetXboxName_entry)
REX_EXPORT(__imp__DmCaptureStackBackTrace, rex::kernel::xbdm::DmCaptureStackBackTrace_entry)
REX_EXPORT(__imp__DmWalkLoadedModules, rex::kernel::xbdm::DmWalkLoadedModules_entry)
REX_EXPORT(__imp__DmCloseLoadedModules, rex::kernel::xbdm::DmCloseLoadedModules_entry)
REX_EXPORT(__imp__DmFindPdbSignature, rex::kernel::xbdm::DmFindPdbSignature_entry)
REX_EXPORT(__imp__DmGetXbeInfo, rex::kernel::xbdm::DmGetXbeInfo_entry)
REX_EXPORT(__imp__DmGetSystemInfo, rex::kernel::xbdm::DmGetSystemInfo_entry)
REX_EXPORT(__imp__DmMapDevkitDrive, rex::kernel::xbdm::DmMapDevkitDrive_entry)
REX_EXPORT(__imp__DmGetThreadInfoEx, rex::kernel::xbdm::DmGetThreadInfoEx_entry)
REX_EXPORT(__imp__DmQueryTitleMemoryStatistics, rex::kernel::xbdm::DmQueryTitleMemoryStatistics_entry)
REX_EXPORT(__imp__DmOpenPerformanceCounter, rex::kernel::xbdm::DmFailed_entry)
REX_EXPORT(__imp__DmQueryPerformanceCounterHandle, rex::kernel::xbdm::DmFailed_entry)
REX_EXPORT(__imp__DmClosePerformanceCounter, rex::kernel::xbdm::DmFailed_entry)
REX_EXPORT(__imp__DmGetThreadList, rex::kernel::xbdm::DmFailed_entry)
REX_EXPORT(__imp__DmReboot, rex::kernel::xbdm::DmFailed_entry)
REX_EXPORT(__imp__DmTraceSetIOThread, rex::kernel::xbdm::DmFailed_entry)
REX_EXPORT(__imp__DmTraceSetBufferSize, rex::kernel::xbdm::DmFailed_entry)
REX_EXPORT(__imp__DmTraceSaveBuffer, rex::kernel::xbdm::DmFailed_entry)
REX_EXPORT(__imp__DmTraceStopRecording, rex::kernel::xbdm::DmFailed_entry)
REX_EXPORT(__imp__DmTraceStartRecordingFunction, rex::kernel::xbdm::DmFailed_entry)
REX_EXPORT(__imp__DmTraceStartRecording, rex::kernel::xbdm::DmFailed_entry)
