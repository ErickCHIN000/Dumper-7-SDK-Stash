#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// Function BP_ControllerAudio.BP_ControllerAudio_C.SetSoundConcurrency
struct ABP_ControllerAudio_C_SetSoundConcurrency_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C02[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class USoundConcurrency*>               K2Node_MakeSet_Set;                                // 0x8(0x50)(None)
};

// 0xD (0xD - 0x0)
// Function BP_ControllerAudio.BP_ControllerAudio_C.HandlePlaySound
struct ABP_ControllerAudio_C_HandlePlaySound_Params
{
public:
	class UAudioComponent*                       Audio;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartTime;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BP_ControllerAudio.BP_ControllerAudio_C.FadeInSound
struct ABP_ControllerAudio_C_FadeInSound_Params
{
public:
	float                                        FadeInDuration;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FadeVolumeLevel;                                   // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartTime;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_ControllerAudio.BP_ControllerAudio_C.FadeOutSound
struct ABP_ControllerAudio_C_FadeOutSound_Params
{
public:
	bool                                         Destroy_;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CFB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FadeOutDuration;                                   // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function BP_ControllerAudio.BP_ControllerAudio_C.SetSoundVolume
struct ABP_ControllerAudio_C_SetSoundVolume_Params
{
public:
	float                                        NewVolumeMultiplier;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function BP_ControllerAudio.BP_ControllerAudio_C.AdjustSoundVolume
struct ABP_ControllerAudio_C_AdjustSoundVolume_Params
{
public:
	float                                        AdjustVolumeDuration;                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AdjustVolumeLevel;                                 // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_ControllerAudio.BP_ControllerAudio_C.Debug_NoVibration_Text
struct ABP_ControllerAudio_C_Debug_NoVibration_Text_Params
{
public:
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x0(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function BP_ControllerAudio.BP_ControllerAudio_C.Debug_NoSound_Text
struct ABP_ControllerAudio_C_Debug_NoSound_Text_Params
{
public:
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x0(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function BP_ControllerAudio.BP_ControllerAudio_C.DebugVibration_2D_Text
struct ABP_ControllerAudio_C_DebugVibration_2D_Text_Params
{
public:
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)(None)
};

// 0x38 (0x38 - 0x0)
// Function BP_ControllerAudio.BP_ControllerAudio_C.DebugVibration_3D_Text
struct ABP_ControllerAudio_C_DebugVibration_3D_Text_Params
{
public:
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)(None)
};

// 0xB0 (0xB0 - 0x0)
// Function BP_ControllerAudio.BP_ControllerAudio_C.DebugSound_3D_Text
struct ABP_ControllerAudio_C_DebugSound_3D_Text_Params
{
public:
	float                                        CallFunc_GetLifeSpan_ReturnValue;                  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F52[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x98(0x18)(None)
};

// 0xB0 (0xB0 - 0x0)
// Function BP_ControllerAudio.BP_ControllerAudio_C.DebugSound_2D_Text
struct ABP_ControllerAudio_C_DebugSound_2D_Text_Params
{
public:
	float                                        CallFunc_GetLifeSpan_ReturnValue;                  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FEF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x98(0x18)(None)
};

// 0x1 (0x1 - 0x0)
// Function BP_ControllerAudio.BP_ControllerAudio_C.SetSoundLifeSpan
struct ABP_ControllerAudio_C_SetSoundLifeSpan_Params
{
public:
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_ControllerAudio.BP_ControllerAudio_C.SetVibrationLifeSpan
struct ABP_ControllerAudio_C_SetVibrationLifeSpan_Params
{
public:
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x22 (0x22 - 0x0)
// Function BP_ControllerAudio.BP_ControllerAudio_C.ShouldEnableDebug
struct ABP_ControllerAudio_C_ShouldEnableDebug_Params
{
public:
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3097[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetDebugDualSenseAudio_ReturnValue;       // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3E4 (0x3E4 - 0x0)
// Function BP_ControllerAudio.BP_ControllerAudio_C.DebugSpheres
struct ABP_ControllerAudio_C_DebugSpheres_Params
{
public:
	class UAudioComponent*                       Audio;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Radius;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Falloff;                                           // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Local_FallOff;                                     // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Local_Radius;                                      // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Local_Audio;                                       // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSoundAttenuationSettings             CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings; // 0x30(0x3A0)(None)
	bool                                         CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue; // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_311C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakVector_X;                            // 0x3D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0x3D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0x3DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x3E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ControllerAudio.BP_ControllerAudio_C.HandleAttachment
struct ABP_ControllerAudio_C_HandleAttachment_Params
{
public:
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ControllerAudio.BP_ControllerAudio_C.ExecuteUbergraph_BP_ControllerAudio
struct ABP_ControllerAudio_C_ExecuteUbergraph_BP_ControllerAudio_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPlatform                         CallFunc_GetPlatform_ReturnValue;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


