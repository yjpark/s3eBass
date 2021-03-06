/*
 * (C) 2001-2012 Marmalade. All Rights Reserved.
 *
 * This document is protected by copyright, and contains information
 * proprietary to Marmalade.
 *
 * This file consists of source code released by Marmalade under
 * the terms of the accompanying End User License Agreement (EULA).
 * Please do not use this program/source code before you have read the
 * EULA and have agreed to be bound by its terms.
 */
/*
 * WARNING: this is an autogenerated file and will be overwritten by
 * the extension interface script.
 */
#ifndef S3E_EXT_BASS_H
#define S3E_EXT_BASS_H

#include <s3eTypes.h>
#include "bass.h"
// \cond HIDDEN_DEFINES
S3E_BEGIN_C_DECL
// \endcond

/**
 * Returns S3E_TRUE if the Bass extension is available.
 */
s3eBool s3eBassAvailable();

BOOL s3eBASS_SetConfig(DWORD option, DWORD value);

DWORD s3eBASS_GetConfig(DWORD option);

BOOL s3eBASS_SetConfigPtr(DWORD option, void* value);

void* s3eBASS_GetConfigPtr(DWORD option);

DWORD s3eBASS_GetVersion();

int s3eBASS_ErrorGetCode();

BOOL s3eBASS_GetDeviceInfo(DWORD device, BASS_DEVICEINFO* info);

BOOL s3eBASS_Init(int device, DWORD freq, DWORD flags, void* win, void* dsguid);

BOOL s3eBASS_SetDevice(DWORD device);

DWORD s3eBASS_GetDevice();

BOOL s3eBASS_Free();

BOOL s3eBASS_GetInfo(BASS_INFO* info);

BOOL s3eBASS_Update(DWORD length);

float s3eBASS_GetCPU();

BOOL s3eBASS_Start();

BOOL s3eBASS_Stop();

BOOL s3eBASS_Pause();

BOOL s3eBASS_SetVolume(float volume);

float s3eBASS_GetVolume();

HPLUGIN s3eBASS_PluginLoad(const char* file, DWORD flags);

BOOL s3eBASS_PluginFree(HPLUGIN handle);

const BASS_PLUGININFO* s3eBASS_PluginGetInfo(HPLUGIN handle);

BOOL s3eBASS_Set3DFactors(float distf, float rollf, float doppf);

BOOL s3eBASS_Get3DFactors(float* distf, float* rollf, float* doppf);

BOOL s3eBASS_Set3DPosition(const BASS_3DVECTOR* pos, const BASS_3DVECTOR* vel, const BASS_3DVECTOR* front, const BASS_3DVECTOR* top);

BOOL s3eBASS_Get3DPosition(BASS_3DVECTOR* pos, BASS_3DVECTOR* vel, BASS_3DVECTOR* front, BASS_3DVECTOR* top);

void s3eBASS_Apply3D();

HMUSIC s3eBASS_MusicLoad(BOOL mem, const void* file, QWORD offset, DWORD length, DWORD flags, DWORD freq);

BOOL s3eBASS_MusicFree(HMUSIC handle);

HSAMPLE s3eBASS_SampleLoad(BOOL mem, const void* file, QWORD offset, DWORD length, DWORD max, DWORD flags);

HSAMPLE s3eBASS_SampleCreate(DWORD length, DWORD freq, DWORD chans, DWORD max, DWORD flags);

BOOL s3eBASS_SampleFree(HSAMPLE handle);

BOOL s3eBASS_SampleSetData(HSAMPLE handle, const void* buffer);

BOOL s3eBASS_SampleGetData(HSAMPLE handle, void* buffer);

BOOL s3eBASS_SampleGetInfo(HSAMPLE handle, BASS_SAMPLE* info);

BOOL s3eBASS_SampleSetInfo(HSAMPLE handle, const BASS_SAMPLE* info);

HCHANNEL s3eBASS_SampleGetChannel(HSAMPLE handle, BOOL onlynew);

DWORD s3eBASS_SampleGetChannels(HSAMPLE handle, HCHANNEL* channels);

BOOL s3eBASS_SampleStop(HSAMPLE handle);

HSTREAM s3eBASS_StreamCreate(DWORD freq, DWORD chans, DWORD flags, STREAMPROC* proc, void* user);

HSTREAM s3eBASS_StreamCreateFile(BOOL mem, const void* file, QWORD offset, QWORD length, DWORD flags);

HSTREAM s3eBASS_StreamCreateURL(const char* url, DWORD offset, DWORD flags, DOWNLOADPROC* proc, void* user);

HSTREAM s3eBASS_StreamCreateFileUser(DWORD system, DWORD flags, const BASS_FILEPROCS* proc, void* user);

BOOL s3eBASS_StreamFree(HSTREAM handle);

QWORD s3eBASS_StreamGetFilePosition(HSTREAM handle, DWORD mode);

DWORD s3eBASS_StreamPutData(HSTREAM handle, const void* buffer, DWORD length);

DWORD s3eBASS_StreamPutFileData(HSTREAM handle, const void* buffer, DWORD length);

BOOL s3eBASS_RecordGetDeviceInfo(DWORD device, BASS_DEVICEINFO* info);

BOOL s3eBASS_RecordInit(int device);

BOOL s3eBASS_RecordSetDevice(DWORD device);

DWORD s3eBASS_RecordGetDevice();

BOOL s3eBASS_RecordFree();

BOOL s3eBASS_RecordGetInfo(BASS_RECORDINFO* info);

const char* s3eBASS_RecordGetInputName(int input);

BOOL s3eBASS_RecordSetInput(int input, DWORD flags, float volume);

DWORD s3eBASS_RecordGetInput(int input, float* volume);

HRECORD s3eBASS_RecordStart(DWORD freq, DWORD chans, DWORD flags, RECORDPROC* proc, void* user);

double s3eBASS_ChannelBytes2Seconds(DWORD handle, QWORD pos);

QWORD s3eBASS_ChannelSeconds2Bytes(DWORD handle, double pos);

DWORD s3eBASS_ChannelGetDevice(DWORD handle);

BOOL s3eBASS_ChannelSetDevice(DWORD handle, DWORD device);

DWORD s3eBASS_ChannelIsActive(DWORD handle);

BOOL s3eBASS_ChannelGetInfo(DWORD handle, BASS_CHANNELINFO* info);

const char* s3eBASS_ChannelGetTags(DWORD handle, DWORD tags);

DWORD s3eBASS_ChannelFlags(DWORD handle, DWORD flags, DWORD mask);

BOOL s3eBASS_ChannelUpdate(DWORD handle, DWORD length);

BOOL s3eBASS_ChannelLock(DWORD handle, BOOL lock);

BOOL s3eBASS_ChannelPlay(DWORD handle, BOOL restart);

BOOL s3eBASS_ChannelStop(DWORD handle);

BOOL s3eBASS_ChannelPause(DWORD handle);

BOOL s3eBASS_ChannelSetAttribute(DWORD handle, DWORD attrib, float value);

BOOL s3eBASS_ChannelGetAttribute(DWORD handle, DWORD attrib, float* value);

BOOL s3eBASS_ChannelSlideAttribute(DWORD handle, DWORD attrib, float value, DWORD time);

BOOL s3eBASS_ChannelIsSliding(DWORD handle, DWORD attrib);

BOOL s3eBASS_ChannelSet3DAttributes(DWORD handle, int mode, float min, float max, int iangle, int oangle, float outvol);

BOOL s3eBASS_ChannelGet3DAttributes(DWORD handle, DWORD* mode, float* min, float* max, DWORD* iangle, DWORD* oangle, float* outvol);

BOOL s3eBASS_ChannelSet3DPosition(DWORD handle, const BASS_3DVECTOR* pos, const BASS_3DVECTOR* orient, const BASS_3DVECTOR* vel);

BOOL s3eBASS_ChannelGet3DPosition(DWORD handle, BASS_3DVECTOR* pos, BASS_3DVECTOR* orient, BASS_3DVECTOR* vel);

QWORD s3eBASS_ChannelGetLength(DWORD handle, DWORD mode);

BOOL s3eBASS_ChannelSetPosition(DWORD handle, QWORD pos, DWORD mode);

QWORD s3eBASS_ChannelGetPosition(DWORD handle, DWORD mode);

DWORD s3eBASS_ChannelGetLevel(DWORD handle);

DWORD s3eBASS_ChannelGetData(DWORD handle, void* buffer, DWORD length);

HSYNC s3eBASS_ChannelSetSync(DWORD handle, DWORD type, QWORD param, SYNCPROC* proc, void* user);

BOOL s3eBASS_ChannelRemoveSync(DWORD handle, HSYNC sync);

HDSP s3eBASS_ChannelSetDSP(DWORD handle, DSPPROC* proc, void* user, int priority);

BOOL s3eBASS_ChannelRemoveDSP(DWORD handle, HDSP dsp);

BOOL s3eBASS_ChannelSetLink(DWORD handle, DWORD chan);

BOOL s3eBASS_ChannelRemoveLink(DWORD handle, DWORD chan);

HFX s3eBASS_ChannelSetFX(DWORD handle, DWORD type, int priority);

BOOL s3eBASS_ChannelRemoveFX(DWORD handle, HFX fx);

BOOL s3eBASS_FXSetParameters(HFX handle, const void* params);

BOOL s3eBASS_FXGetParameters(HFX handle, void* params);

BOOL s3eBASS_FXReset(HFX handle);

S3E_END_C_DECL

#endif /* !S3E_EXT_BASS_H */
