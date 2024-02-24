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

// 0x1C8 (0x1C8 - 0x0)
// Function GameplayGM.GameplayGM_C.GameModeUtils_GetArbNameForLevelFromSaveGame
struct AGameplayGM_C_GameModeUtils_GetArbNameForLevelFromSaveGame_Params
{
public:
	class FName                                  LevelName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ArbName;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A87[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Local_ArbName;                                     // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Local_LevelName;                                   // 0x1C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FMapSaveState                         CallFunc_Map_Find_Value;                           // 0x98(0x108)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Set_Contains_ReturnValue;                 // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AA1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_BoolToString_ReturnValue;            // 0x1A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function GameplayGM.GameplayGM_C.GameModeUtils_IsAbritraryNameInSet
struct AGameplayGM_C_GameModeUtils_IsAbritraryNameInSet_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsInSet;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Set_Contains_ReturnValue;                 // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function GameplayGM.GameplayGM_C.GameModeUtils_RemoveAbritraryNameFromChangedSet
struct AGameplayGM_C_GameModeUtils_RemoveAbritraryNameFromChangedSet_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccessful;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Set_Remove_ReturnValue;                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE8 (0xE8 - 0x0)
// Function GameplayGM.GameplayGM_C.SpawnLuteAudioComponent
struct AGameplayGM_C_SpawnLuteAudioComponent_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B45[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetPlayerPawn_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B48[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x20(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldTransform_SweepHitResult;      // 0x50(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAmbientSound*                         CallFunc_FinishSpawningActor_ReturnValue;          // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameplayGM.GameplayGM_C.RemoveLuteIndicator
struct AGameplayGM_C_RemoveLuteIndicator_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameplayGM.GameplayGM_C.LuteIndicator_PrevMusic
struct AGameplayGM_C_LuteIndicator_PrevMusic_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function GameplayGM.GameplayGM_C.LuteIndicator_NextMusic
struct AGameplayGM_C_LuteIndicator_NextMusic_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function GameplayGM.GameplayGM_C.SpawnLuteIndicator
struct AGameplayGM_C_SpawnLuteIndicator_Params
{
public:
	bool                                         CanSpawn;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BFB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_LutePrompt_C*                      CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GameplayGM.GameplayGM_C.CanHaveIndicator
struct AGameplayGM_C_CanHaveIndicator_Params
{
public:
	bool                                         CanChange;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD8 (0xD8 - 0x0)
// Function GameplayGM.GameplayGM_C.SetLuteAnimPlayRate
struct AGameplayGM_C_SetLuteAnimPlayRate_Params
{
public:
	TMap<class USoundBase*, float>               Local_PlayRates;                                   // 0x0(0x50)(Edit, BlueprintVisible)
	TMap<class USoundBase*, float>               K2Node_MakeVariable_MakeVariableOutput;            // 0x50(0x50)(None)
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Map_Find_Value;                           // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CD4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface;     // 0xB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CE0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                CallFunc_0_Base_GetMesh_Mesh;                      // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function GameplayGM.GameplayGM_C.UpdateLuteMusic
struct AGameplayGM_C_UpdateLuteMusic_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2D43[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            CallFunc_GetImperviousLuteMusic_MaxFam_ReturnValue; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class USoundBase*                            CallFunc_GetClockworkLuteMusic_MaxFam_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CallFunc_GetSimpleLuteMusic_MaxFam_ReturnValue;    // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GameplayGM.GameplayGM_C.PlayPrevLuteMusic
struct AGameplayGM_C_PlayPrevLuteMusic_Params
{
public:
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess_2;                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function GameplayGM.GameplayGM_C.PlayNextLuteMusic
struct AGameplayGM_C_PlayNextLuteMusic_Params
{
public:
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess_1;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchInteger_CmpSuccess_2;                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function GameplayGM.GameplayGM_C.CanChangeLuteMusic
struct AGameplayGM_C_CanChangeLuteMusic_Params
{
public:
	bool                                         CanChange;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function GameplayGM.GameplayGM_C.GetClockworkLuteMusic_MaxFam
struct AGameplayGM_C_GetClockworkLuteMusic_MaxFam_Params
{
public:
	class USoundBase*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E84[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Temp_object_Variable;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_2;                            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_3;                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_4;                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default;                             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function GameplayGM.GameplayGM_C.GetImperviousLuteMusic_MaxFam
struct AGameplayGM_C_GetImperviousLuteMusic_MaxFam_Params
{
public:
	class USoundBase*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EE7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Temp_object_Variable;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_2;                            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_3;                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_4;                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_5;                            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_6;                            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_7;                            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_8;                            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_9;                            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default;                             // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function GameplayGM.GameplayGM_C.GetSimpleLuteMusic_MaxFam
struct AGameplayGM_C_GetSimpleLuteMusic_MaxFam_Params
{
public:
	class USoundBase*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F5C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Temp_object_Variable;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_2;                            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_3;                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default;                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function GameplayGM.GameplayGM_C.GetClockworkLuteMusic
struct AGameplayGM_C_GetClockworkLuteMusic_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FE9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FF0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Temp_object_Variable;                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_2;                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_3;                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_4;                            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_5;                            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_6;                            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_7;                            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_8;                            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_9;                            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default;                             // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function GameplayGM.GameplayGM_C.GetImperviousLuteMusic
struct AGameplayGM_C_GetImperviousLuteMusic_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_305D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3060[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Temp_object_Variable;                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_2;                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_3;                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_4;                            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_5;                            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_6;                            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_7;                            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_8;                            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_9;                            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default;                             // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function GameplayGM.GameplayGM_C.GetSimpleLuteMusic
struct AGameplayGM_C_GetSimpleLuteMusic_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30CB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Temp_object_Variable;                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_2;                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_3;                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_4;                            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_5;                            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_6;                            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_7;                            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_8;                            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_9;                            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default;                             // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function GameplayGM.GameplayGM_C.GetLuteTransform
struct AGameplayGM_C_GetLuteTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
	enum class Enum_LuteType                     Temp_byte_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_312F[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x40(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            K2Node_Select_Default;                             // 0x70(0x30)(IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function GameplayGM.GameplayGM_C.LuteAtMaxFam?
struct AGameplayGM_C_LuteAtMaxFam__Params
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAtMax;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_314F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FamClamped;                                        // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetItemFamiliarity_Value;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Clamp_ReturnValue;                        // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xCC (0xCC - 0x0)
// Function GameplayGM.GameplayGM_C.SetLuteRelativeTransform
struct AGameplayGM_C_SetLuteRelativeTransform_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3166[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x10(0x30)(IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3169[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetActorRelativeTransform_SweepHitResult; // 0x44(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x60 (0x60 - 0x0)
// Function GameplayGM.GameplayGM_C.SelectLuteSoundCue
struct AGameplayGM_C_SelectLuteSoundCue_Params
{
public:
	int32                                        Local_LuteFamiliarity;                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CallFunc_GetClockworkLuteMusic_ReturnValue;        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CallFunc_GetImperviousLuteMusic_MaxFam_ReturnValue; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CallFunc_GetSimpleLuteMusic_MaxFam_ReturnValue;    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue_1;       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LuteAtMaxFam__IsAtMax;                    // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3195[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LuteAtMaxFam__FamClamped;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LuteAtMaxFam__IsAtMax_1;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3198[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LuteAtMaxFam__FamClamped_1;               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_319B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            CallFunc_GetClockworkLuteMusic_MaxFam_ReturnValue; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LuteAtMaxFam__IsAtMax_2;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_LuteAtMaxFam__FamClamped_2;               // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31A3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue_2;       // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CallFunc_GetSimpleLuteMusic_ReturnValue;           // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CallFunc_GetImperviousLuteMusic_ReturnValue;       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function GameplayGM.GameplayGM_C.StopLuteAudio
struct AGameplayGM_C_StopLuteAudio_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function GameplayGM.GameplayGM_C.DualSense_LuteMusic
struct AGameplayGM_C_DualSense_LuteMusic_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31F9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x30(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ControllerAudio_C*                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function GameplayGM.GameplayGM_C.DualSense_FogStart
struct AGameplayGM_C_DualSense_FogStart_Params
{
public:
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_322C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x1C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3234[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x30(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ControllerAudio_C*                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2BE (0x2BE - 0x0)
// Function GameplayGM.GameplayGM_C.TeleportCharacterOnSpawn
struct AGameplayGM_C_TeleportCharacterOnSpawn_Params
{
public:
	struct FTransform                            Local_Transform;                                   // 0x0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	class AZero_Base_C*                          Local_0Base;                                       // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x44(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_RotatorToVector_ReturnValue;         // 0x5C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_ProjectVectorOnToPlane_ReturnValue;       // 0x68(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x74(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x80(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TransformToString_ReturnValue;       // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x140(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue_1;       // 0x158(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_WantsToPlayFromHereOrCameraLocation_bWantsSpecificSpawnTransform; // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32FF[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_WantsToPlayFromHereOrCameraLocation_Transform; // 0x170(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_WantsToPlayFromHereOrCameraLocation_bWantsSpecificSpawnTransform_1; // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3304[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_WantsToPlayFromHereOrCameraLocation_Transform_1; // 0x1B0(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x1E0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x1EC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x1F8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x204(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3312[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetActorLocationAndRotation_SweepHitResult_1; // 0x214(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocationAndRotation_ReturnValue_1; // 0x29C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3315[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x2A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AZero_Base_C*                          K2Node_DynamicCast_As0_Base;                       // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCheckpointNameValid_ReturnValue;        // 0x2B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x2BB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x2BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x2BD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x129 (0x129 - 0x0)
// Function GameplayGM.GameplayGM_C.MapState_ResetSaveFile
struct AGameplayGM_C_MapState_ResetSaveFile_Params
{
public:
	TMap<class FName, struct FMapSaveState>      Temp_name_Variable;                                // 0x0(0x50)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_335D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, float>                     Temp_name_Variable_1;                              // 0x60(0x50)(None)
	TMap<class FName, struct FEnemySaveState>    Temp_name_Variable_2;                              // 0xB0(0x50)(None)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetMapSaveSlotName_ReturnValue;           // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UDHGameInstance*                       K2Node_DynamicCast_AsDHGame_Instance;              // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3366[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetPrimaryUserIndex_ReturnValue;          // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;      // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x35 (0x35 - 0x0)
// Function GameplayGM.GameplayGM_C.DH_ClearAllFamiliarity
struct AGameplayGM_C_DH_ClearAllFamiliarity_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x18(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD9 (0xD9 - 0x0)
// Function GameplayGM.GameplayGM_C.GetWaifuReference
struct AGameplayGM_C_GetWaifuReference_Params
{
public:
	class UGameInfoInstance_C*                   GameInstance;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Waifu;                                             // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_DynamicCast_AsActor;                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x48(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         K2Node_DynamicCast_AsGameplay_PC;                  // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Map_Find_Value;                           // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3402[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class AWaifuNPC_C>            CallFunc_Map_Find_Value_1;                         // 0x98(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3406[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1; // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AWaifuNPC_C*                           K2Node_DynamicCast_AsWaifu_NPC;                    // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2D0 (0x2D0 - 0x0)
// Function GameplayGM.GameplayGM_C.DebugStartingCheckpoint
struct AGameplayGM_C_DebugStartingCheckpoint_Params
{
public:
	struct FServerSaveFile                       ServerSaveFile;                                    // 0x0(0x270)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x270(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x280(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TransformToString_ReturnValue;       // 0x290(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x2A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x2B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x2C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.DH_ResetCutscenes
struct AGameplayGM_C_DH_ResetCutscenes_Params
{
public:
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function GameplayGM.GameplayGM_C.GetCheckpointsSaveSlotName
struct AGameplayGM_C_GetCheckpointsSaveSlotName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function GameplayGM.GameplayGM_C.AddStatusIconGlow
struct AGameplayGM_C_AddStatusIconGlow_Params
{
public:
	int32                                        IconID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Remove;                                            // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_34A7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                  CallFunc_GetHUD_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AYourHUD_C*                            K2Node_DynamicCast_AsYour_HUD;                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x79 (0x79 - 0x0)
// Function GameplayGM.GameplayGM_C.FastTravel_FadeGlands
struct AGameplayGM_C_FastTravel_FadeGlands_Params
{
public:
	float                                        Amount;                                            // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface;     // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_350C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_1;   // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3510[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  CallFunc_Barbarous_GetCathedralGland_Mesh;         // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_Barbarous_GetFireGland_Mesh;              // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_351F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_2;   // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3526[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMeshComponent*                  CallFunc_Barbarous_GetCryptGland_Mesh;             // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function GameplayGM.GameplayGM_C.FastTravel_StopFadeBallistazooka
struct AGameplayGM_C_FastTravel_StopFadeBallistazooka_Params
{
public:
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base;            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function GameplayGM.GameplayGM_C.FastTravel_MeshVisibility
struct AGameplayGM_C_FastTravel_MeshVisibility_Params
{
public:
	bool                                         bNewVisibility;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3568[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface;     // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_356C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                CallFunc_0_Base_GetMesh_Mesh;                      // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function GameplayGM.GameplayGM_C.PlayerFade
struct AGameplayGM_C_PlayerFade_Params
{
public:
	float                                        ParameterValue;                                    // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3582[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface;     // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3585[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_1;   // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_358D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                CallFunc_0_Base_GetMesh_Mesh;                      // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function GameplayGM.GameplayGM_C.DH_TestHeal
struct AGameplayGM_C_DH_TestHeal_Params
{
public:
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base;            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ApplyDamage_ReturnValue;                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9B (0x9B - 0x0)
// Function GameplayGM.GameplayGM_C.DH_ShowEnemyHP
struct AGameplayGM_C_DH_ShowEnemyHP_Params
{
public:
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35F6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1; // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_35FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_2;            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2; // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3601[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_3;            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3; // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3604[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_4;            // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4; // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_EnemyHPVisibility            CallFunc_GetEnemyHPVis_Visibility;                 // 0x99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function GameplayGM.GameplayGM_C.OverrideStatusIconStackNum
struct AGameplayGM_C_OverrideStatusIconStackNum_Params
{
public:
	int32                                        IconID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StackNum;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                  CallFunc_GetHUD_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AYourHUD_C*                            K2Node_DynamicCast_AsYour_HUD;                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function GameplayGM.GameplayGM_C.DH_UnlockAllTutorials
struct AGameplayGM_C_DH_UnlockAllTutorials_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3630[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x18(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function GameplayGM.GameplayGM_C.DH_UnlockAllFastTravel
struct AGameplayGM_C_DH_UnlockAllFastTravel_Params
{
public:
	TArray<class FName>                          Local_Waifus;                                      // 0x0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3662[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x20(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3665[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_366A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.FastTravel_AnimAfterTeleport
struct AGameplayGM_C_FastTravel_AnimAfterTeleport_Params
{
public:
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base;            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function GameplayGM.GameplayGM_C.FastTravel_TeleportPlayer
struct AGameplayGM_C_FastTravel_TeleportPlayer_Params
{
public:
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base;            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetStartingCheckpointTransform_bIsTravel; // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.DH_GiveMePoison
struct AGameplayGM_C_DH_GiveMePoison_Params
{
public:
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.DH_SetMeOnFire
struct AGameplayGM_C_DH_SetMeOnFire_Params
{
public:
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function GameplayGM.GameplayGM_C.PauseStatusIcon
struct AGameplayGM_C_PauseStatusIcon_Params
{
public:
	int32                                        IconID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UnPause;                                           // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                  CallFunc_GetHUD_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AYourHUD_C*                            K2Node_DynamicCast_AsYour_HUD;                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2B5 (0x2B5 - 0x0)
// Function GameplayGM.GameplayGM_C.DH_AddAllConsumables
struct AGameplayGM_C_DH_AddAllConsumables_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_371F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x18(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3723[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_GetDataTableRowFromName_OutRow;           // 0x38(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_3725[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x172(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryToAddItemToInventory_Success;          // 0x173(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_372C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_TryToAddItemToInventory_OutItem;          // 0x178(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_372D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_TryToAddItemToInventory_AddedToSlot;      // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x2B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function GameplayGM.GameplayGM_C.ClearFastTravelUnlocks
struct AGameplayGM_C_ClearFastTravelUnlocks_Params
{
public:
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm, HasGetValueTypeHash)
};

// 0x2A (0x2A - 0x0)
// Function GameplayGM.GameplayGM_C.GetValidLastAmbient
struct AGameplayGM_C_GetValidLastAmbient_Params
{
public:
	class USoundBase*                            Ambient;                                           // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Local_Ambient;                                     // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3775[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGamePlayGameState_C*                  K2Node_DynamicCast_AsGame_Play_Game_State;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function GameplayGM.GameplayGM_C.GetValidLastMusic
struct AGameplayGM_C_GetValidLastMusic_Params
{
public:
	class USoundBase*                            Music;                                             // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Local_Music;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3794[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGamePlayGameState_C*                  K2Node_DynamicCast_AsGame_Play_Game_State;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x35 (0x35 - 0x0)
// Function GameplayGM.GameplayGM_C.DH_MaxAllFamiliarity
struct AGameplayGM_C_DH_MaxAllFamiliarity_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x18(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x35 (0x35 - 0x0)
// Function GameplayGM.GameplayGM_C.DH_UnlockAllItemEntries
struct AGameplayGM_C_DH_UnlockAllItemEntries_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetDataTableRowNames_OutRowNames;         // 0x10(0x10)(ReferenceParm, HasGetValueTypeHash)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function GameplayGM.GameplayGM_C.GetMapSaveSlotName
struct AGameplayGM_C_GetMapSaveSlotName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function GameplayGM.GameplayGM_C.PlayerDeadOnloadPrintString
struct AGameplayGM_C_PlayerDeadOnloadPrintString_Params
{
public:
	bool                                         IsDead;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3822[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_BoolToText_ReturnValue;              // 0x8(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x20(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x60(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x70(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function GameplayGM.GameplayGM_C.UpdateEnemyStateMapPrintSting
struct AGameplayGM_C_UpdateEnemyStateMapPrintSting_Params
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldSpawn_;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsPermanentlyDead_;                                // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Died_;                                             // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_386E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue;            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_1;          // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_2;          // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function GameplayGM.GameplayGM_C.SaveRespawningItems
struct AGameplayGM_C_SaveRespawningItems_Params
{
public:
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             CallFunc_MakeTimespan_ReturnValue;                 // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                             CallFunc_Add_TimespanTimespan_ReturnValue;         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.LoadRespawningItems
struct AGameplayGM_C_LoadRespawningItems_Params
{
public:
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function GameplayGM.GameplayGM_C.DH_SetCutscenesAsSeen
struct AGameplayGM_C_DH_SetCutscenesAsSeen_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_392A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3930[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3934[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x179 (0x179 - 0x0)
// Function GameplayGM.GameplayGM_C.DH_RespawnNearbySpawners
struct AGameplayGM_C_DH_RespawnNearbySpawners_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39B5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x10(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array;                            // 0x20(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base;            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x44(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                    CallFunc_SphereTraceMultiForObjects_OutHits;       // 0x50(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SphereTraceMultiForObjects_ReturnValue;   // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_Array_Get_Item;                           // 0x68(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_39C8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0xFC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x108(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x114(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x120(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_39D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x140(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x158(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x164(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAdvancedEnemySpawner_C*               K2Node_DynamicCast_AsAdvanced_Enemy_Spawner;       // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.TakeGlimpsesAndTeleport
struct AGameplayGM_C_TakeGlimpsesAndTeleport_Params
{
public:
	class ABarbarous_C*                          CallFunc_GetCharacterAsBarbarous_AsBarbarous;      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function GameplayGM.GameplayGM_C.GetWaifuLevelFromCheckpointName
struct AGameplayGM_C_GetWaifuLevelFromCheckpointName_Params
{
public:
	class FName                                  WaifuCheckpointName;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LevelName;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x139 (0x139 - 0x0)
// Function GameplayGM.GameplayGM_C.DH_FastTravel
struct AGameplayGM_C_DH_FastTravel_Params
{
public:
	class FName                                  LevelName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  WaifuName;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Local_WaifuName;                                   // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Local_LevelName;                                   // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A68[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A6C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x40(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x50(0x10)(ZeroConstructor, NoDestructor)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface;     // 0xB8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A74[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULoadingScreen_C*                      K2Node_DynamicCast_AsLoading_Screen;               // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A79[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1; // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2; // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface_1;   // 0xF0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A7F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetCurrentPersistentLevelName_ReturnValue; // 0x104(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A82[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class AWaifuNPC_C>            CallFunc_Map_Find_Value;                           // 0x110(0x28)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function GameplayGM.GameplayGM_C.TeleportToLastWaifu
struct AGameplayGM_C_TeleportToLastWaifu_Params
{
public:
	class FName                                  Temp_name_Variable;                                // 0x0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Map_Find_Value;                           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A8E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetWaifuLevelFromCheckpointName_LevelName; // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function GameplayGM.GameplayGM_C.OverrideStatusIconDuration
struct AGameplayGM_C_OverrideStatusIconDuration_Params
{
public:
	int32                                        IconID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Duration;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                  CallFunc_GetHUD_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AYourHUD_C*                            K2Node_DynamicCast_AsYour_HUD;                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function GameplayGM.GameplayGM_C.RemoveStatusIcon
struct AGameplayGM_C_RemoveStatusIcon_Params
{
public:
	int32                                        IconID;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AA8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                  CallFunc_GetHUD_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AYourHUD_C*                            K2Node_DynamicCast_AsYour_HUD;                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function GameplayGM.GameplayGM_C.AddStatusIcon
struct AGameplayGM_C_AddStatusIcon_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3ACA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Icon;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StackNum;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        IconID;                                            // 0x14(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AHUD*                                  CallFunc_GetHUD_ReturnValue;                       // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AYourHUD_C*                            K2Node_DynamicCast_AsYour_HUD;                     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3ACF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddStatusEffect_IconID;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function GameplayGM.GameplayGM_C.DH_TestCredits
struct AGameplayGM_C_DH_TestCredits_Params
{
public:
	bool                                         PlayFadeIn;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_Credits_Music                MusicToPlay;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3AE3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_Storyteller_Credits_C*            CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.DH_ClearNamedInt
struct AGameplayGM_C_DH_ClearNamedInt_Params
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function GameplayGM.GameplayGM_C.SpawnDefaultPawnAtTransform
struct AGameplayGM_C_SpawnDefaultPawnAtTransform_Params
{
public:
	class AController*                           NewPlayer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B01[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SpawnTransform;                                    // 0x10(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor)
	class APawn*                                 ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_SpawnDefaultPawnAtTransform_ReturnValue;  // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function GameplayGM.GameplayGM_C.SaveCheckpointIfTravelling
struct AGameplayGM_C_SaveCheckpointIfTravelling_Params
{
public:
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function GameplayGM.GameplayGM_C.ResetEnemySaves
struct AGameplayGM_C_ResetEnemySaves_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnemySaveState                       K2Node_MakeStruct_EnemySaveState;                  // 0xC(0x3)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B1C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FEnemySaveState>               CallFunc_Map_Values_Values;                        // 0x10(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x20(0x10)(ReferenceParm, HasGetValueTypeHash)
	struct FEnemySaveState                       CallFunc_Array_Get_Item;                           // 0x30(0x3)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B1D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5D0 (0x5D0 - 0x0)
// Function GameplayGM.GameplayGM_C.SetStartingCheckpointTransform
struct AGameplayGM_C_SetStartingCheckpointTransform_Params
{
public:
	struct FServerSaveFile                       ServerSaveFile;                                    // 0x0(0x270)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         bIsTravel;                                         // 0x270(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B48[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FServerSaveFile                       Local_SaveFile;                                    // 0x280(0x270)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   LocGameInstance;                                   // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetWaifuReference_Waifu;                  // 0x4F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetWaifuReference_ReturnValue;            // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AWaifuNPC_C*                           K2Node_DynamicCast_AsWaifu_NPC;                    // 0x508(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B50[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x520(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DidPlayerTravelBetweenMaps_bTravelled;    // 0x550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B54[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetAllActorsWithTag_OutActors;            // 0x558(0x10)(ReferenceParm, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   K2Node_DynamicCast_AsGame_Info_Instance;           // 0x578(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x580(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B5B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAreaCheckpoint_C*                     K2Node_DynamicCast_AsArea_Checkpoint;              // 0x588(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x591(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B5E[0xE];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x5A0(0x30)(IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function GameplayGM.GameplayGM_C.GetBellTeleportLocation
struct AGameplayGM_C_GetBellTeleportLocation_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B82[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetAllActorsWithTag_OutActors;            // 0x40(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B87[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B88[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x70(0x30)(ConstParm, IsPlainOldData, NoDestructor)
};

// 0xC0 (0xC0 - 0x0)
// Function GameplayGM.GameplayGM_C.WantsToPlayFromHereOrCameraLocation
struct AGameplayGM_C_WantsToPlayFromHereOrCameraLocation_Params
{
public:
	bool                                         bWantsSpecificSpawnTransform;                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B9A[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x40(0x30)(IsPlainOldData, NoDestructor)
	TArray<class APlayerStartPIE*>               CallFunc_GetAllActorsOfClass_OutActors;            // 0x70(0x10)(ReferenceParm, HasGetValueTypeHash)
	class APlayerStartPIE*                       CallFunc_Array_Get_Item;                           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BA0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x90(0x30)(ConstParm, IsPlainOldData, NoDestructor)
};

// 0x61 (0x61 - 0x0)
// Function GameplayGM.GameplayGM_C.IsCheckpointNameValid
struct AGameplayGM_C_IsCheckpointNameValid_Params
{
public:
	class FString                                LevelName;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BB9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BBA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BBC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BBE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function GameplayGM.GameplayGM_C.EnableGravityAfterPlayerSpawn
struct AGameplayGM_C_EnableGravityAfterPlayerSpawn_Params
{
public:
	class AZero_Base_C*                          K2Node_DynamicCast_As0_Base;                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BD4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue;         // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function GameplayGM.GameplayGM_C.DisableGravityAtPlayerSpawn
struct AGameplayGM_C_DisableGravityAtPlayerSpawn_Params
{
public:
	class AZero_Base_C*                          K2Node_DynamicCast_As0_Base;                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BF0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue;         // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function GameplayGM.GameplayGM_C.FindPlayerStart
struct AGameplayGM_C_FindPlayerStart_Params
{
public:
	class AController*                           Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                IncomingName;                                      // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerStart*>                  CallFunc_GetAllActorsOfClass_OutActors;            // 0x20(0x10)(ReferenceParm, HasGetValueTypeHash)
	class APlayerStart*                          CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x233 (0x233 - 0x0)
// Function GameplayGM.GameplayGM_C.GetPlayerStart
struct AGameplayGM_C_GetPlayerStart_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C45[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(Parm, OutParm, IsPlainOldData, NoDestructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UDHGameInstance*                       K2Node_DynamicCast_AsDHGame_Instance;              // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C49[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPrimaryUserIndex_ReturnValue;          // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSaveGameExist_ReturnValue;            // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDHGameInstance*                       K2Node_DynamicCast_AsDHGame_Instance_1;            // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C50[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetPrimaryUserIndex_ReturnValue_1;        // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APlayerStart*>                  CallFunc_GetAllActorsOfClass_OutActors;            // 0xD0(0x10)(ReferenceParm, HasGetValueTypeHash)
	class USaveGame*                             CallFunc_DHLoadGameFromSlot_ReturnValue;           // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerStart*                          CallFunc_Array_Get_Item;                           // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UServerSaveGame_C*                     K2Node_DynamicCast_AsServer_Save_Game;             // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C58[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x100(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue;              // 0x130(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x148(0x40)(HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_NameToText_ReturnValue_1;            // 0x188(0x18)(None)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C5D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x1A8(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x1E8(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C5E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x200(0x18)(None)
	class ULevelStreaming*                       CallFunc_GetStreamingLevel_ReturnValue;            // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x220(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x232(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5B (0x5B - 0x0)
// Function GameplayGM.GameplayGM_C.ChoosePlayerStart
struct AGameplayGM_C_ChoosePlayerStart_Params
{
public:
	class AController*                           Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C99[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C9C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C9F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class APlayerStart*>                  CallFunc_GetAllActorsOfClass_OutActors;            // 0x28(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CA1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerStart*                          CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CA6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerStartPIE*                       K2Node_DynamicCast_AsPlayer_Start_PIE;             // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnNotifyEnd_E6027B74432EB53F9C56C28C75CBD61D
struct AGameplayGM_C_OnNotifyEnd_E6027B74432EB53F9C56C28C75CBD61D_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnNotifyBegin_E6027B74432EB53F9C56C28C75CBD61D
struct AGameplayGM_C_OnNotifyBegin_E6027B74432EB53F9C56C28C75CBD61D_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnInterrupted_E6027B74432EB53F9C56C28C75CBD61D
struct AGameplayGM_C_OnInterrupted_E6027B74432EB53F9C56C28C75CBD61D_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnBlendOut_E6027B74432EB53F9C56C28C75CBD61D
struct AGameplayGM_C_OnBlendOut_E6027B74432EB53F9C56C28C75CBD61D_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnCompleted_E6027B74432EB53F9C56C28C75CBD61D
struct AGameplayGM_C_OnCompleted_E6027B74432EB53F9C56C28C75CBD61D_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnNotifyEnd_E92A37D146A4E9A7A64E91B1F258256D
struct AGameplayGM_C_OnNotifyEnd_E92A37D146A4E9A7A64E91B1F258256D_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnNotifyBegin_E92A37D146A4E9A7A64E91B1F258256D
struct AGameplayGM_C_OnNotifyBegin_E92A37D146A4E9A7A64E91B1F258256D_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnInterrupted_E92A37D146A4E9A7A64E91B1F258256D
struct AGameplayGM_C_OnInterrupted_E92A37D146A4E9A7A64E91B1F258256D_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnBlendOut_E92A37D146A4E9A7A64E91B1F258256D
struct AGameplayGM_C_OnBlendOut_E92A37D146A4E9A7A64E91B1F258256D_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnCompleted_E92A37D146A4E9A7A64E91B1F258256D
struct AGameplayGM_C_OnCompleted_E92A37D146A4E9A7A64E91B1F258256D_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnNotifyEnd_7834E7B34F1EECDA1C64D3AC7D7C1342
struct AGameplayGM_C_OnNotifyEnd_7834E7B34F1EECDA1C64D3AC7D7C1342_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnNotifyBegin_7834E7B34F1EECDA1C64D3AC7D7C1342
struct AGameplayGM_C_OnNotifyBegin_7834E7B34F1EECDA1C64D3AC7D7C1342_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnInterrupted_7834E7B34F1EECDA1C64D3AC7D7C1342
struct AGameplayGM_C_OnInterrupted_7834E7B34F1EECDA1C64D3AC7D7C1342_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnBlendOut_7834E7B34F1EECDA1C64D3AC7D7C1342
struct AGameplayGM_C_OnBlendOut_7834E7B34F1EECDA1C64D3AC7D7C1342_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnCompleted_7834E7B34F1EECDA1C64D3AC7D7C1342
struct AGameplayGM_C_OnCompleted_7834E7B34F1EECDA1C64D3AC7D7C1342_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnNotifyEnd_D490BD52451D61A8530BE78E40A95EBE
struct AGameplayGM_C_OnNotifyEnd_D490BD52451D61A8530BE78E40A95EBE_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnNotifyBegin_D490BD52451D61A8530BE78E40A95EBE
struct AGameplayGM_C_OnNotifyBegin_D490BD52451D61A8530BE78E40A95EBE_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnInterrupted_D490BD52451D61A8530BE78E40A95EBE
struct AGameplayGM_C_OnInterrupted_D490BD52451D61A8530BE78E40A95EBE_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnBlendOut_D490BD52451D61A8530BE78E40A95EBE
struct AGameplayGM_C_OnBlendOut_D490BD52451D61A8530BE78E40A95EBE_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnCompleted_D490BD52451D61A8530BE78E40A95EBE
struct AGameplayGM_C_OnCompleted_D490BD52451D61A8530BE78E40A95EBE_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnNotifyEnd_6E68E6A04AFB79AC70B218A8F3473C15
struct AGameplayGM_C_OnNotifyEnd_6E68E6A04AFB79AC70B218A8F3473C15_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnNotifyBegin_6E68E6A04AFB79AC70B218A8F3473C15
struct AGameplayGM_C_OnNotifyBegin_6E68E6A04AFB79AC70B218A8F3473C15_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnInterrupted_6E68E6A04AFB79AC70B218A8F3473C15
struct AGameplayGM_C_OnInterrupted_6E68E6A04AFB79AC70B218A8F3473C15_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnBlendOut_6E68E6A04AFB79AC70B218A8F3473C15
struct AGameplayGM_C_OnBlendOut_6E68E6A04AFB79AC70B218A8F3473C15_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.OnCompleted_6E68E6A04AFB79AC70B218A8F3473C15
struct AGameplayGM_C_OnCompleted_6E68E6A04AFB79AC70B218A8F3473C15_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.GameModeUtils_AddAbritraryNameToChangedSet
struct AGameplayGM_C_GameModeUtils_AddAbritraryNameToChangedSet_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function GameplayGM.GameplayGM_C.K2_OnSwapPlayerControllers
struct AGameplayGM_C_K2_OnSwapPlayerControllers_Params
{
public:
	class APlayerController*                     OldPC;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     NewPC;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function GameplayGM.GameplayGM_C.RespawnPlayer
struct AGameplayGM_C_RespawnPlayer_Params
{
public:
	class APlayerController*                     PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PlayerCharacter;                                   // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.K2_OnLogout
struct AGameplayGM_C_K2_OnLogout_Params
{
public:
	class AController*                           ExitingController;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.K2_PostLogin
struct AGameplayGM_C_K2_PostLogin_Params
{
public:
	class APlayerController*                     NewPlayer;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameplayGM.GameplayGM_C.SaveMapState
struct AGameplayGM_C_SaveMapState_Params
{
public:
	bool                                         ForceDiskWrite;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB (0xB - 0x0)
// Function GameplayGM.GameplayGM_C.UpdateEnemyStateMap
struct AGameplayGM_C_UpdateEnemyStateMap_Params
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldSpawn_;                                      // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsPermanentlyDead_;                                // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Died_;                                             // 0xA(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function GameplayGM.GameplayGM_C.StartFallgrimFogCycle
struct AGameplayGM_C_StartFallgrimFogCycle_Params
{
public:
	float                                        Time;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function GameplayGM.GameplayGM_C.EnemyRunAwayFromFog
struct AGameplayGM_C_EnemyRunAwayFromFog_Params
{
public:
	class AActor*                                EnemyCharacter;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GameplayGM.GameplayGM_C.ReceiveEndPlay
struct AGameplayGM_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function GameplayGM.GameplayGM_C.SaveCheckpoint
struct AGameplayGM_C_SaveCheckpoint_Params
{
public:
	class FName                                  CheckpointUniqueID;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E31[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CheckpointTransform;                               // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	class FName                                  CheckpointSubLevel;                                // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CheckpointMainLevel;                               // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function GameplayGM.GameplayGM_C.UseOrnateMask
struct AGameplayGM_C_UseOrnateMask_Params
{
public:
	class FName                                  Level;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Waifu;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x16D4 (0x16D4 - 0x0)
// Function GameplayGM.GameplayGM_C.ExecuteUbergraph_GameplayGM
struct AGameplayGM_C_ExecuteUbergraph_GameplayGM_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3FF3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMapSaveState                         Temp_struct_Variable;                              // 0x8(0x108)(ConstParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FF6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x114(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3FF9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x128(0x8)(NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x130(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FFD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Temp_object_Variable;                              // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3FFF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            Temp_object_Variable_1;                            // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_2;                            // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x168(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_9;                   // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x180(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_8;                   // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x198(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_7;                   // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x1B0(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_6;                   // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x1C8(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_5;                   // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x1E0(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable;                                // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x1F8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_SwitchName_CmpSuccess;                      // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4006[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_4;                   // 0x20C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_3;                   // 0x214(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x21C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_2;                   // 0x22C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x234(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_1;                   // 0x244(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x24C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName;                     // 0x25C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x264(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_1;                              // 0x274(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x27C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchName_CmpSuccess_1;                    // 0x27D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_400E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_21;                  // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMapSaveState                         CallFunc_Map_Find_Value;                           // 0x288(0x108)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4011[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x394(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x3AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_Name;                                 // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base;            // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorScale3D_ReturnValue;              // 0x3C0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlayAnimMontage_ReturnValue;              // 0x3CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x3D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4016[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBriefFadeToBlack_C*                   CallFunc_Create_ReturnValue;                       // 0x3E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBriefReturnFromBlackFade_C*           CallFunc_Create_ReturnValue_1;                     // 0x3E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_1;          // 0x3F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABarbarous_C*                          K2Node_DynamicCast_AsBarbarous;                    // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_401A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_22;                  // 0x40C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_401E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x418(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBriefFadeToBlack_C*                   CallFunc_Create_ReturnValue_2;                     // 0x420(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4021[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetBellTeleportLocation_Transform;        // 0x430(0x30)(IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x460(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x46C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x478(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4023[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x490(0x30)(IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x4C0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetActorTransform_SweepHitResult;      // 0x4CC(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorTransform_ReturnValue;         // 0x554(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_402B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_2;          // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x560(0x10)(ZeroConstructor, NoDestructor)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_3;          // 0x570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_23;                  // 0x578(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMovementInputs_Forward;                // 0x580(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMovementInputs_right;                  // 0x584(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Abs_ReturnValue;                          // 0x588(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Abs_ReturnValue_1;                        // 0x58C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Add_FloatFloat_ReturnValue;               // 0x590(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x594(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x595(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_402E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array;                            // 0x598(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_4;          // 0x5A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABarbarous_C*                          CallFunc_GetCharacterAsBarbarous_AsBarbarous;      // 0x5B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x5B8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x5C4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABarbarous_C*                          CallFunc_GetCharacterAsBarbarous_AsBarbarous_1;    // 0x5D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_5;          // 0x5D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x5E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4036[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x5E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x5F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4038[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_6;          // 0x5F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_7;          // 0x600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x608(0x10)(ZeroConstructor, NoDestructor)
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1; // 0x618(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_403B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_8;          // 0x628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_9;          // 0x630(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x639(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4040[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_10;         // 0x640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_11;         // 0x648(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetItemFamiliarity_Value;                 // 0x650(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4043[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABarbarous_C*                          CallFunc_GetCharacterAsBarbarous_AsBarbarous_2;    // 0x658(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x661(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4044[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Temp_float_Variable;                               // 0x664(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_float_Variable_1;                             // 0x668(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4045[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_12;         // 0x670(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_13;         // 0x678(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2; // 0x680(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x688(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x689(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4048[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Select_Default;                             // 0x68C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0x690(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchName_CmpSuccess_2;                    // 0x698(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_404B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_10;                  // 0x69C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x6A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_404D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x6A8(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_404E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetLuteTransform_ReturnValue;             // 0x6C0(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x6F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_small_physics_prop_guitar_C*       CallFunc_FinishSpawningActor_ReturnValue;          // 0x6F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanChangeLuteMusic_CanChange;             // 0x700(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanChangeLuteMusic_CanChange_1;           // 0x701(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanHaveIndicator_CanChange;               // 0x702(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4051[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x708(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     K2Node_Event_OldPC;                                // 0x710(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     K2Node_Event_NewPC;                                // 0x718(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x720(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x730(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_StormModeIsActive_ReturnValue;            // 0x731(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4056[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x734(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x738(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4058[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     K2Node_CustomEvent_PlayerController;               // 0x740(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_CustomEvent_PlayerCharacter;                // 0x748(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         K2Node_DynamicCast_AsGameplay_PC;                  // 0x750(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x758(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_405D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x760(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x768(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_405F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_24;                  // 0x76C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_11;                  // 0x774(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4064[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           K2Node_Event_ExitingController;                    // 0x780(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         K2Node_DynamicCast_AsGameplay_PC_1;                // 0x788(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x790(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4065[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x798(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x7A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4067[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInfoInstance_C*                   K2Node_DynamicCast_AsGame_Info_Instance;           // 0x7A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x7B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_406B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x7B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     K2Node_Event_NewPlayer;                            // 0x7B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x7C0(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x7D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x7D4(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x7E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetPlayerStart_ReturnValue;               // 0x7E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetPlayerStart_Transform;                 // 0x7F0(0x30)(IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x820(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4071[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x828(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x830(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x838(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGamePlayGameState_C*                  K2Node_DynamicCast_AsGame_Play_Game_State;         // 0x840(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x848(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4073[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          K2Node_DynamicCast_As0_Base;                       // 0x850(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x858(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4075[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x85C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapState_C*                           CallFunc_CreateSaveGameObject_ReturnValue;         // 0x860(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ForceDiskWrite;                 // 0x868(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4077[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue;          // 0x870(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x880(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_Key;                            // 0x888(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_ShouldSpawn_;                   // 0x890(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_IsPermanentlyDead_;             // 0x891(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Died_;                          // 0x892(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FEnemySaveState                       K2Node_MakeStruct_EnemySaveState;                  // 0x893(0x3)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_407A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue_1;        // 0x898(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_2;            // 0x8A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x8B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   K2Node_DynamicCast_AsGame_Info_Instance_1;         // 0x8B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x8C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_407D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x8C8(0x10)(ReferenceParm, HasGetValueTypeHash)
	struct FEnemySaveState                       K2Node_MakeStruct_EnemySaveState_1;                // 0x8D8(0x3)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_407F[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x8E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x8E4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnemySaveState                       CallFunc_Map_Find_Value_1;                         // 0x8EC(0x3)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x8EF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x8F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x8F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x8F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x8FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x900(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4081[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x904(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_12;                  // 0x908(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x910(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4083[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue_2;        // 0x918(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x928(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4084[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_2;          // 0x92C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4085[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_3;            // 0x938(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue_1;          // 0x940(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4086[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInfoInstance_C*                   K2Node_DynamicCast_AsGame_Info_Instance_2;         // 0x948(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x950(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x951(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4089[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          K2Node_DynamicCast_As0_Base_1;                     // 0x958(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x960(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_408C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x964(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x968(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_408E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelStreaming*                       CallFunc_GetStreamingLevel_ReturnValue;            // 0x970(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x978(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsLevelLoaded_ReturnValue;                // 0x988(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4099[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_5;                   // 0x98C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_2;        // 0x990(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         K2Node_DynamicCast_AsGameplay_PC_2;                // 0x998(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x9A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_409C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x9A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x9B0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x9BC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x9C8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_409E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          K2Node_DynamicCast_As0_Base_2;                     // 0x9D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x9E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetActorLocationAndRotation_SweepHitResult; // 0x9E4(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocationAndRotation_ReturnValue; // 0xA6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_VectorToText_ReturnValue;            // 0xA70(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xA88(0x40)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xAC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0xAD0(0x10)(ReferenceParm, HasGetValueTypeHash)
	class UBriefReturnFromBlackFade_C*           CallFunc_Create_ReturnValue_3;                     // 0xAE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xAE8(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xB00(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_19;           // 0xB10(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_13;                  // 0xB20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CallFunc_GetAllActorsWithTag_OutActors;            // 0xB28(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xB38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetAllActorsWithTag_OutActors_1;          // 0xB40(0x10)(ReferenceParm, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_20;           // 0xB50(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0xB60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetAllActorsWithTag_OutActors_2;          // 0xB68(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_6;                   // 0xB78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item_1;                         // 0xB80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISpawnerInterface_C>  K2Node_DynamicCast_AsSpawner_Interface;            // 0xB88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0xB98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0xBA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xBB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0xBC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40B8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetAllActorsWithTag_OutActors_3;          // 0xBC8(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<class AActor*>                        CallFunc_GetAllActorsWithTag_OutActors_4;          // 0xBD8(0x10)(ReferenceParm, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item_2;                         // 0xBE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item_3;                         // 0xBF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISpawnerInterface_C>  K2Node_DynamicCast_AsSpawner_Interface_1;          // 0xBF8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_13;                    // 0xC08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40BD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue_1;             // 0xC10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xC20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0xC30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xC34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40C0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_6;               // 0xC38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xC3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetAllActorsWithTag_OutActors_5;          // 0xC40(0x10)(ReferenceParm, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item_4;                         // 0xC50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_7;               // 0xC58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISpawnerInterface_C>  K2Node_DynamicCast_AsSpawner_Interface_2;          // 0xC60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_14;                    // 0xC70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0xC71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40C5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue_2;             // 0xC78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xC88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Time;                           // 0xC98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40C7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0xCA0(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_5;                  // 0xCA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0xCAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0xCB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_1;               // 0xCB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGamePlayGameState_C*                  K2Node_DynamicCast_AsGame_Play_Game_State_1;       // 0xCC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_15;                    // 0xCC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_21;           // 0xCCC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_40CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_EnemyCharacter;                 // 0xCE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_7;                   // 0xCE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEnemyCharacter_C*                     K2Node_DynamicCast_AsEnemy_Character;              // 0xCF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_16;                    // 0xCF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item_5;                         // 0xD00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISpawnerInterface_C>  K2Node_DynamicCast_AsSpawner_Interface_3;          // 0xD08(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_17;                    // 0xD18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40D6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue_3;             // 0xD20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xD30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue_4;             // 0xD40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xD50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0xD60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GameModeUtils_IsAbritraryNameInSet_bIsInSet; // 0xD61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40DA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_14;         // 0xD68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default_1;                           // 0xD70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface;        // 0xD78(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_18;                    // 0xD88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            K2Node_Select_Default_2;                           // 0xD90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_14;                  // 0xD98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WantsToPlayFromHereOrCameraLocation_bWantsSpecificSpawnTransform; // 0xDA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40E1[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_WantsToPlayFromHereOrCameraLocation_Transform; // 0xDB0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xDE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0xDE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40E5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetCurrentLevelName_ReturnValue_3;        // 0xDE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_3;          // 0xDF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue_2;               // 0xE00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMapSaveState                         CallFunc_Map_Find_Value_2;                         // 0xE08(0x108)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0xF10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGamePlayGameState_C*                  K2Node_DynamicCast_AsGame_Play_Game_State_2;       // 0xF18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_19;                    // 0xF20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_CheckpointUniqueID;             // 0xF24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40EE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            K2Node_CustomEvent_CheckpointTransform;            // 0xF30(0x30)(IsPlainOldData, NoDestructor)
	class FName                                  K2Node_CustomEvent_CheckpointSubLevel;             // 0xF60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_CheckpointMainLevel;            // 0xF68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0xF70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0xF71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40F2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1; // 0xF78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_22;           // 0xF80(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_3;                              // 0xF90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0xF98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0xF99(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xF9A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40F9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_6;                  // 0xF9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0xFA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_40FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2; // 0xFA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3; // 0xFB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckPlayerInventoryForGland_ReturnValue; // 0xFB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CheckPlayerInventoryForGland_ReturnValue_1; // 0xFB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4101[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetPosition_ReturnValue;                  // 0xFBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0xFC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_FInterpTo_ReturnValue;                    // 0xFC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0xFC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_7;                  // 0xFD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0xFDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4107[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_8;                 // 0xFE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_8;                   // 0xFE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item_6;                         // 0xFE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_15;         // 0xFF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3; // 0xFF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x1000(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_410B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_15;                  // 0x1004(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_Level;                          // 0x100C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_Waifu;                          // 0x1014(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_410F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_16;         // 0x1020(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x1028(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AExponentialHeightFog*                 K2Node_DynamicCast_AsExponential_Height_Fog;       // 0x1030(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_20;                    // 0x1038(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4111[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_16;                  // 0x103C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_23;           // 0x1044(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4113[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetMapSaveSlotName_ReturnValue;           // 0x1058(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetMapSaveSlotName_ReturnValue_1;         // 0x1068(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FMapSaveState                         CallFunc_Map_Find_Value_3;                         // 0x1078(0x108)(HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x1180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4114[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_17;                  // 0x1184(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_24;           // 0x118C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4115[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetMapSaveSlotName_ReturnValue_2;         // 0x11A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_25;           // 0x11B0(0x10)(ZeroConstructor, NoDestructor)
	class USoundBase*                            CallFunc_GetValidLastMusic_Music;                  // 0x11C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            CallFunc_GetValidLastAmbient_Ambient;              // 0x11C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_18;                  // 0x11D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMapSaveState                         K2Node_MakeStruct_MapSaveState;                    // 0x11D8(0x108)(HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_26;           // 0x12E0(0x10)(ZeroConstructor, NoDestructor)
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x12F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_9;                 // 0x12F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4119[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1; // 0x1300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2; // 0x1308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x1310(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x1320(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_3; // 0x1330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x1338(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_411D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_4; // 0x1340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface;     // 0x1348(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_21;                    // 0x1358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4122[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGamePlayGameState_C*                  CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState; // 0x1360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_19;                  // 0x1368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_5; // 0x1370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_17;         // 0x1378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface_1;   // 0x1380(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_22;                    // 0x1390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4127[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_18;         // 0x1398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_27;           // 0x13A0(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_8;                  // 0x13B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_412A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Temp_object_Variable_3;                            // 0x13B8(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	TArray<struct FHitResult>                    CallFunc_SphereTraceMultiForObjects_OutHits;       // 0x13C8(0x10)(ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_SphereTraceMultiForObjects_ReturnValue;   // 0x13D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_6;                // 0x13D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_412C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_Array_Get_Item_7;                         // 0x13DC(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x1464(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x1465(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_412E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_BreakHitResult_Time;                      // 0x1468(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x146C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x1470(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x147C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x1488(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x1494(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x14A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x14A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x14B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x14B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x14C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x14C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x14C8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x14D4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_8;               // 0x14E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4135[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEnemyCharacter_C*                     K2Node_DynamicCast_AsEnemy_Character_1;            // 0x14E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_23;                    // 0x14F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue_7;                // 0x14F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4137[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABossBaseCharacter_C*                  K2Node_DynamicCast_AsBoss_Base_Character;          // 0x14F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_24;                    // 0x1500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanSeePlayer__ReturnValue;                // 0x1501(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4139[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_10;                // 0x1504(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_28;           // 0x1508(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x1518(0x8)(NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_19;         // 0x1520(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_20;         // 0x1528(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_21;         // 0x1530(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_22;         // 0x1538(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_23;         // 0x1540(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x1548(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x1549(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4142[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable_9;                   // 0x154C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelStreamingVolume*                 CallFunc_Array_Get_Item_8;                         // 0x1550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_4;            // 0x1558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_5;            // 0x1560(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDHGameInstance*                       K2Node_DynamicCast_AsDHGame_Instance;              // 0x1568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_25;                    // 0x1570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4147[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDHGameInstance*                       K2Node_DynamicCast_AsDHGame_Instance_1;            // 0x1578(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_26;                    // 0x1580(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4149[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetPrimaryUserIndex_ReturnValue;          // 0x1584(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetPrimaryUserIndex_ReturnValue_1;        // 0x1588(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSaveGameExist_ReturnValue;            // 0x158C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_414B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USaveGame*                             CallFunc_DHLoadGameFromSlot_ReturnValue;           // 0x1590(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x1598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_414D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMapState_C*                           K2Node_DynamicCast_AsMap_State;                    // 0x15A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_27;                    // 0x15A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4150[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable_4;                              // 0x15AC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x15B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_6;            // 0x15B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDHGameInstance*                       K2Node_DynamicCast_AsDHGame_Instance_2;            // 0x15C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_28;                    // 0x15C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4157[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetPrimaryUserIndex_ReturnValue_2;        // 0x15CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_7;            // 0x15D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USaveGame*                             CallFunc_DHLoadGameFromSlot_ReturnValue_1;         // 0x15D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDHGameInstance*                       K2Node_DynamicCast_AsDHGame_Instance_3;            // 0x15E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_29;                    // 0x15E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_415C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UServerSaveGame_C*                     K2Node_DynamicCast_AsServer_Save_Game;             // 0x15F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_30;                    // 0x15F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_415E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetPrimaryUserIndex_ReturnValue_3;        // 0x15FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;      // 0x1600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SetStartingCheckpointTransform_bIsTravel; // 0x1601(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4160[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x1608(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class ULevelStreaming*                       CallFunc_GetStreamingLevel_ReturnValue_1;          // 0x1618(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x1620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DoesSaveGameExist_ReturnValue_1;          // 0x1621(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4163[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_20;                  // 0x1624(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4164[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetAllActorsWithTag_OutActors_6;          // 0x1630(0x10)(ReferenceParm, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item_9;                         // 0x1640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_9;               // 0x1648(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_8;                // 0x164C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LoadLevelInstance_bOutSuccess;            // 0x164D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_416A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULevelStreamingDynamic*                CallFunc_LoadLevelInstance_ReturnValue;            // 0x1650(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_2;        // 0x1658(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_416E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_9;                  // 0x165C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_9;                // 0x1660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_418E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_11;                // 0x1664(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_3;        // 0x1668(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4; // 0x1670(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1;      // 0x1678(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_31;                    // 0x1688(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0x1689(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4195[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDHGameInstance*                       CallFunc_GetInstance_ReturnValue;                  // 0x1690(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue; // 0x1698(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4197[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue;               // 0x169C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_29;           // 0x16A0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue_1; // 0x16B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4198[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue_1;             // 0x16B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue_2; // 0x16B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4199[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_12;                // 0x16BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue_2;             // 0x16C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetArbNameForLevelFromSaveGame_ReturnValue_3; // 0x16C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_419A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_13;                // 0x16C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Conv_BoolToInt_ReturnValue_3;             // 0x16CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_14;                // 0x16D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


