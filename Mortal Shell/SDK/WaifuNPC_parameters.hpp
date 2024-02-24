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

// 0x18 (0x18 - 0x0)
// Function WaifuNPC.WaifuNPC_C.CreateKnifeTutorial
struct AWaifuNPC_C_CreateKnifeTutorial_Params
{
public:
	class FName                                  Temp_name_Variable;                                // 0x0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULargeTutorial_C*                      CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x63 (0x63 - 0x0)
// Function WaifuNPC.WaifuNPC_C.ShowKnifeTutorial
struct AWaifuNPC_C_ShowKnifeTutorial_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface;        // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2744[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetCurrentHadernAbilityForSlot_AbilityID; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsTutorialUnlocked_Unlocked_;             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_275C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface;     // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CallFunc_0_Base_GetCurrentArmor_CurrentArmorType;  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x61 (0x61 - 0x0)
// Function WaifuNPC.WaifuNPC_C.DualSense_Waifu_Awake
struct AWaifuNPC_C_DualSense_Waifu_Awake_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_27E6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x4(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue_1;            // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27F2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27FA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x20(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_ControllerAudio_C*                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function WaifuNPC.WaifuNPC_C.GetCurrentSubLevel
struct AWaifuNPC_C_GetCurrentSubLevel_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetCurrentStreamingLevelName_ReturnValue; // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x89 (0x89 - 0x0)
// Function WaifuNPC.WaifuNPC_C.RespawnEnemies
struct AWaifuNPC_C_RespawnEnemies_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_295E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class AAdvancedEnemySpawner_C> CallFunc_Array_Get_Item;                           // 0x10(0x28)(HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2970[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAdvancedEnemySpawner_C*               K2Node_DynamicCast_AsAdvanced_Enemy_Spawner;       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2981[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF0 (0xF0 - 0x0)
// Function WaifuNPC.WaifuNPC_C.DebugActivateWaifu
struct AWaifuNPC_C_DebugActivateWaifu_Params
{
public:
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x10(0x30)(IsPlainOldData, NoDestructor)
	class FString                                CallFunc_GetCurrentStreamingLevelName_ReturnValue; // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_TransformToString_ReturnValue;       // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetCurrentPersistentLevelName_ReturnValue; // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue_1;          // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function WaifuNPC.WaifuNPC_C.IsDarkForm
struct AWaifuNPC_C_IsDarkForm_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2AAD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function WaifuNPC.WaifuNPC_C.StopDance
struct AWaifuNPC_C_StopDance_Params
{
public:
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCultistWaifu_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint; // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x49 (0x49 - 0x0)
// Function WaifuNPC.WaifuNPC_C.StartDance
struct AWaifuNPC_C_StartDance_Params
{
public:
	enum class Enum_LuteType                     Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B3B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B47[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCultistWaifu_Skeleton_AnimBlueprint_C* K2Node_DynamicCast_AsCultist_Waifu_Skeleton_Anim_Blueprint; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2B50[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayGM_C*                         CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;    // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Select_Default;                             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue;    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function WaifuNPC.WaifuNPC_C.BindLuteDance
struct AWaifuNPC_C_BindLuteDance_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class AGameplayGM_C*                         CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x88 (0x88 - 0x0)
// Function WaifuNPC.WaifuNPC_C.ConstructSoldItemAmountID
struct AWaifuNPC_C_ConstructSoldItemAmountID_Params
{
public:
	class FName                                  ItemId;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ID;                                                // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Contains_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C43[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_SelectString_ReturnValue;                 // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x178 (0x178 - 0x0)
// Function WaifuNPC.WaifuNPC_C.GetNotSoldCount
struct AWaifuNPC_C_GetNotSoldCount_Params
{
public:
	struct FMerchantItem                         Item;                                              // 0x0(0x25)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	uint8                                        Pad_2CD1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NotSoldCount;                                      // 0x28(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetItem_bFound;                           // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2CDE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_GetItem_OutRow;                           // 0x30(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_2CE7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_ConstructSoldItemAmountID_ID;             // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function WaifuNPC.WaifuNPC_C.SetRespawnedAtWaifu
struct AWaifuNPC_C_SetRespawnedAtWaifu_Params
{
public:
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function WaifuNPC.WaifuNPC_C.RefillTokenStock
struct AWaifuNPC_C_RefillTokenStock_Params
{
public:
	TArray<class FName>                          DisplayRequirements;                               // 0x0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	TArray<struct FMerchantItem>                 NewStock;                                          // 0x10(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
};

// 0x13 (0x13 - 0x0)
// Function WaifuNPC.WaifuNPC_C.GetIsActorUsable
struct AWaifuNPC_C_GetIsActorUsable_Params
{
public:
	bool                                         IsUsable;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsActorUsable_IsUsable;                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E12[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function WaifuNPC.WaifuNPC_C.ShellMaxedOutDialogue
struct AWaifuNPC_C_ShellMaxedOutDialogue_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAllShellMaxedOut_bAllMaxedOut;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       CallFunc_GetShell_CurrentArmor;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsShellMaxedOut_bMaxedOut;                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2E82[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDHDialogueLine>               K2Node_Select_Default;                             // 0x8(0x10)(ReferenceParm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WaifuNPC.WaifuNPC_C.CreateKickTutorial
struct AWaifuNPC_C_CreateKickTutorial_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULargeTutorial_C*                      CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function WaifuNPC.WaifuNPC_C.FadeInWhispers
struct AWaifuNPC_C_FadeInWhispers_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function WaifuNPC.WaifuNPC_C.FadeOutWhispers
struct AWaifuNPC_C_FadeOutWhispers_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6F (0x6F - 0x0)
// Function WaifuNPC.WaifuNPC_C.ShowKickTutorialIfUnlocked
struct AWaifuNPC_C_ShowKickTutorialIfUnlocked_Params
{
public:
	TArray<class FName>                          Kick;                                              // 0x0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FBA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FC4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetArbNameInChangedSetPure_bIsInSet;      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FCF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x30(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsUpgradeUnlocked_bUnlocked;              // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2FE6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x48(0x8)(NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          K2Node_MakeArray_Array;                            // 0x50(0x10)(ReferenceParm, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUpgradeUnlocked_bUnlocked_1;            // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WaifuNPC.WaifuNPC_C.ResetWidget
struct AWaifuNPC_C_ResetWidget_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function WaifuNPC.WaifuNPC_C.EarnEffigyOnShellNameGrasped
struct AWaifuNPC_C_EarnEffigyOnShellNameGrasped_Params
{
public:
	enum class EArmorTypes                       Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_3;                              // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_4;                              // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_5;                              // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base;            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Select_Default;                             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddItemToPlayerInventory_Success;         // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_30D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddItemToPlayerInventory_InventorySlot;   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function WaifuNPC.WaifuNPC_C.RegisterAsFastTravelPoint
struct AWaifuNPC_C_RegisterAsFastTravelPoint_Params
{
public:
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x51 (0x51 - 0x0)
// Function WaifuNPC.WaifuNPC_C.DisableAreaCheckpointMasks
struct AWaifuNPC_C_DisableAreaCheckpointMasks_Params
{
public:
	class FName                                  Temp_name_Variable;                                // 0x0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0x14(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3160[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_Mask_C*>                    CallFunc_GetAllActorsOfClassWithTag_OutActors;     // 0x28(0x10)(ReferenceParm, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Mask_C*                            K2Node_DynamicCast_AsBP_Mask;                      // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3168[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function WaifuNPC.WaifuNPC_C.GetAcceptDialogue
struct AWaifuNPC_C_GetAcceptDialogue_Params
{
public:
	TArray<struct FDHDialogueLine>               NewParam;                                          // 0x0(0x10)(Parm, OutParm, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               K2Node_Select_Default;                             // 0x18(0x10)(ReferenceParm, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WaifuNPC.WaifuNPC_C.GetDeclinedDialogue
struct AWaifuNPC_C_GetDeclinedDialogue_Params
{
public:
	TArray<struct FDHDialogueLine>               NewParam;                                          // 0x0(0x10)(Parm, OutParm, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomIntegerInRange_ReturnValue;         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               K2Node_Select_Default;                             // 0x18(0x10)(ReferenceParm, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function WaifuNPC.WaifuNPC_C.ShouldDoFirstRespawnDialogue?
struct AWaifuNPC_C_ShouldDoFirstRespawnDialogue__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsArbNameInSetPure__IsInSet_;             // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31F4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value_1;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue_1;             // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsArbNameInSetPure__IsInSet__1;           // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function WaifuNPC.WaifuNPC_C.ShouldDoLightShellFirstDialogue?
struct AWaifuNPC_C_ShouldDoLightShellFirstDialogue__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3245[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function WaifuNPC.WaifuNPC_C.GetStock
struct AWaifuNPC_C_GetStock_Params
{
public:
	TArray<struct FMerchantItem>                 NewParam;                                          // 0x0(0x10)(Parm, OutParm, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3282[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3288[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMerchantItem>                 K2Node_Select_Default;                             // 0x28(0x10)(ReferenceParm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WaifuNPC.WaifuNPC_C.SpawnWaifuWakeSound
struct AWaifuNPC_C_SpawnWaifuWakeSound_Params
{
public:
	float                                        NewLocalVar_0;                                     // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x13 (0x13 - 0x0)
// Function WaifuNPC.WaifuNPC_C.ShouldDoNewGamePlusFirstDialogue?
struct AWaifuNPC_C_ShouldDoNewGamePlusFirstDialogue__Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsArbNameInSetPure__IsInSet_;             // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_32F4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnActorUsed
struct AWaifuNPC_C_OnActorUsed_Params
{
public:
	class APlayerController*                     Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3332[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OnActorUsed_Success;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.IsAllShellMaxedOut
struct AWaifuNPC_C_IsAllShellMaxedOut_Params
{
public:
	bool                                         bAllMaxedOut;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsShellMaxedOut_bMaxedOut;                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsShellMaxedOut_bMaxedOut_1;              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsShellMaxedOut_bMaxedOut_2;              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsShellMaxedOut_bMaxedOut_3;              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function WaifuNPC.WaifuNPC_C.IsShellMaxedOut
struct AWaifuNPC_C_IsShellMaxedOut_Params
{
public:
	enum class EArmorTypes                       ShellType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bMaxedOut;                                         // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33CD[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetUpgradeRowNamesFromShell_OutRowNames;  // 0x8(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsShellNameKnown_bKnown;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUpgradeUnlocked_bUnlocked;              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_33E3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnNotifyEnd_4239EAF44A2F0CC18D13B09DBD2719E3
struct AWaifuNPC_C_OnNotifyEnd_4239EAF44A2F0CC18D13B09DBD2719E3_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnNotifyBegin_4239EAF44A2F0CC18D13B09DBD2719E3
struct AWaifuNPC_C_OnNotifyBegin_4239EAF44A2F0CC18D13B09DBD2719E3_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnInterrupted_4239EAF44A2F0CC18D13B09DBD2719E3
struct AWaifuNPC_C_OnInterrupted_4239EAF44A2F0CC18D13B09DBD2719E3_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnBlendOut_4239EAF44A2F0CC18D13B09DBD2719E3
struct AWaifuNPC_C_OnBlendOut_4239EAF44A2F0CC18D13B09DBD2719E3_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnCompleted_4239EAF44A2F0CC18D13B09DBD2719E3
struct AWaifuNPC_C_OnCompleted_4239EAF44A2F0CC18D13B09DBD2719E3_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnNotifyEnd_62800982481FC4156FC0168F8ABE858B
struct AWaifuNPC_C_OnNotifyEnd_62800982481FC4156FC0168F8ABE858B_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnNotifyBegin_62800982481FC4156FC0168F8ABE858B
struct AWaifuNPC_C_OnNotifyBegin_62800982481FC4156FC0168F8ABE858B_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnInterrupted_62800982481FC4156FC0168F8ABE858B
struct AWaifuNPC_C_OnInterrupted_62800982481FC4156FC0168F8ABE858B_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnBlendOut_62800982481FC4156FC0168F8ABE858B
struct AWaifuNPC_C_OnBlendOut_62800982481FC4156FC0168F8ABE858B_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnCompleted_62800982481FC4156FC0168F8ABE858B
struct AWaifuNPC_C_OnCompleted_62800982481FC4156FC0168F8ABE858B_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnNotifyEnd_CB958447407A282239B59599E0DA3935
struct AWaifuNPC_C_OnNotifyEnd_CB958447407A282239B59599E0DA3935_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnNotifyBegin_CB958447407A282239B59599E0DA3935
struct AWaifuNPC_C_OnNotifyBegin_CB958447407A282239B59599E0DA3935_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnInterrupted_CB958447407A282239B59599E0DA3935
struct AWaifuNPC_C_OnInterrupted_CB958447407A282239B59599E0DA3935_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnBlendOut_CB958447407A282239B59599E0DA3935
struct AWaifuNPC_C_OnBlendOut_CB958447407A282239B59599E0DA3935_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnCompleted_CB958447407A282239B59599E0DA3935
struct AWaifuNPC_C_OnCompleted_CB958447407A282239B59599E0DA3935_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnNotifyEnd_49B1E03540C4A207F232EAB89A45BE69
struct AWaifuNPC_C_OnNotifyEnd_49B1E03540C4A207F232EAB89A45BE69_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnNotifyBegin_49B1E03540C4A207F232EAB89A45BE69
struct AWaifuNPC_C_OnNotifyBegin_49B1E03540C4A207F232EAB89A45BE69_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnInterrupted_49B1E03540C4A207F232EAB89A45BE69
struct AWaifuNPC_C_OnInterrupted_49B1E03540C4A207F232EAB89A45BE69_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnBlendOut_49B1E03540C4A207F232EAB89A45BE69
struct AWaifuNPC_C_OnBlendOut_49B1E03540C4A207F232EAB89A45BE69_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnCompleted_49B1E03540C4A207F232EAB89A45BE69
struct AWaifuNPC_C_OnCompleted_49B1E03540C4A207F232EAB89A45BE69_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnNotifyEnd_259DDF6C41CC3FB182FDA08176257DA5
struct AWaifuNPC_C_OnNotifyEnd_259DDF6C41CC3FB182FDA08176257DA5_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnNotifyBegin_259DDF6C41CC3FB182FDA08176257DA5
struct AWaifuNPC_C_OnNotifyBegin_259DDF6C41CC3FB182FDA08176257DA5_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnInterrupted_259DDF6C41CC3FB182FDA08176257DA5
struct AWaifuNPC_C_OnInterrupted_259DDF6C41CC3FB182FDA08176257DA5_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnBlendOut_259DDF6C41CC3FB182FDA08176257DA5
struct AWaifuNPC_C_OnBlendOut_259DDF6C41CC3FB182FDA08176257DA5_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnCompleted_259DDF6C41CC3FB182FDA08176257DA5
struct AWaifuNPC_C_OnCompleted_259DDF6C41CC3FB182FDA08176257DA5_Params
{
public:
	class FName                                  NotifyName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WaifuNPC.WaifuNPC_C.ReceiveAnyDamage
struct AWaifuNPC_C_ReceiveAnyDamage_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageType*                           DamageType;                                        // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WaifuNPC.WaifuNPC_C.TradeFinished
struct AWaifuNPC_C_TradeFinished_Params
{
public:
	bool                                         bBoughtSomething;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnOptionSelected
struct AWaifuNPC_C_OnOptionSelected_Params
{
public:
	bool                                         bYes;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function WaifuNPC.WaifuNPC_C.ReceiveEndPlay
struct AWaifuNPC_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnDialogueProceeded
struct AWaifuNPC_C_OnDialogueProceeded_Params
{
public:
	int32                                        NewEntryIndex;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WaifuNPC.WaifuNPC_C.BndEvt__AudioOcclusionVolume_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature
struct AWaifuNPC_C_BndEvt__AudioOcclusionVolume_K2Node_ComponentBoundEvent_0_ActorBeginOverlapSignature__DelegateSignature_Params
{
public:
	class AActor*                                OverlappedActor;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WaifuNPC.WaifuNPC_C.BndEvt__AudioOcclusionVolume_K2Node_ComponentBoundEvent_1_ActorEndOverlapSignature__DelegateSignature
struct AWaifuNPC_C_BndEvt__AudioOcclusionVolume_K2Node_ComponentBoundEvent_1_ActorEndOverlapSignature__DelegateSignature_Params
{
public:
	class AActor*                                OverlappedActor;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function WaifuNPC.WaifuNPC_C.SetAmbientAudioOcclusion
struct AWaifuNPC_C_SetAmbientAudioOcclusion_Params
{
public:
	float                                        LP_Frequency;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WaifuNPC.WaifuNPC_C.OnItemBought
struct AWaifuNPC_C_OnItemBought_Params
{
public:
	int32                                        ItemIndex;                                         // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Amount;                                            // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WaifuNPC.WaifuNPC_C.CloseUpgradeMenu_OpenTrade
struct AWaifuNPC_C_CloseUpgradeMenu_OpenTrade_Params
{
public:
	bool                                         BoughtSomething;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA78 (0xA78 - 0x0)
// Function WaifuNPC.WaifuNPC_C.ExecuteUbergraph_WaifuNPC
struct AWaifuNPC_C_ExecuteUbergraph_WaifuNPC_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_17;                  // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_16;                  // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x14(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_15;                  // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x2C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable;                                // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B53[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x48(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x58(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x68(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_1;                              // 0x78(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x80(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B5D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetOverlappingActors_OverlappingActors;   // 0x98(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xAD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInViewport_ReturnValue;                 // 0xAE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xAF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_14;                  // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0xC8(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_13;                  // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0xE0(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_12;                  // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0xF8(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_11;                  // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x110(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_10;                  // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x128(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_2;                              // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B6E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x144(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B74[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_9;                   // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x160(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_8;                   // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x178(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_7;                   // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x190(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_6;                   // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x1A8(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_5;                   // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x1C0(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_3;                              // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B86[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_CustomEvent_NotifyName_4;                   // 0x1DC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x1E4(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_3;                   // 0x1F4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_19;           // 0x1FC(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_2;                   // 0x20C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_20;           // 0x214(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_1;                   // 0x224(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_21;           // 0x22C(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName;                     // 0x23C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_22;           // 0x244(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_4;                              // 0x254(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x25C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_4;                              // 0x25D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B91[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_Damage;                               // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B94[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageType*                           K2Node_Event_DamageType;                           // 0x268(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           K2Node_Event_InstigatedBy;                         // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser;                         // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMyNameInChangedSet_ReturnValue;         // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B96[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x284(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base;            // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsShellMaxedOut_bMaxedOut;                // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAllShellMaxedOut_bAllMaxedOut;          // 0x299(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_bBoughtSomething;               // 0x29A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B9D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayGM_C*                         K2Node_DynamicCast_AsGameplay_GM;                  // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BA1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x2BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetCurrentPersistentLevelName_ReturnValue; // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1; // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x2D0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShouldDoNewGamePlusFirstDialogue__ReturnValue; // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_5;                              // 0x301(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BA4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayGM_C*                         CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;    // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface;     // 0x310(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BA8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_MakeLiteralName_ReturnValue;              // 0x324(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldDoNewGamePlusFirstDialogue__ReturnValue_1; // 0x32C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BAA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2; // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_23;           // 0x338(0x10)(ZeroConstructor, NoDestructor)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3; // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BB0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4; // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       CallFunc_GetShell_CurrentArmor;                    // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsShellMaxedOut_bMaxedOut_1;              // 0x361(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bYes;                                 // 0x362(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BB4[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5; // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x371(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x372(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BC1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6; // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShouldDoLightShellFirstDialogue__ReturnValue; // 0x381(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsArbNameInSetPure__IsInSet_;             // 0x382(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BC3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7; // 0x388(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayGM_C*                         CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1;  // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameModeUtilInterface_C> CallFunc_GameModeUtils_SaveMapState_self_CastInput; // 0x398(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShouldDoFirstRespawnDialogue__ReturnValue; // 0x3A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShouldDoFirstRespawnDialogue__ReturnValue_1; // 0x3A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BC8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_8; // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OnActorUsed_Success;                      // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BCC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_1;          // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddItemToPlayerInventory_Success;         // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BCF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AddItemToPlayerInventory_InventorySlot;   // 0x3CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayGM_C*                         CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2;  // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayGM_C*                         CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3;  // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameModeUtilInterface_C> CallFunc_GameModeUtils_SaveMapState_self_CastInput_1; // 0x3E0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TScriptInterface<class IGameModeUtilInterface_C> CallFunc_GameModeUtils_SaveMapState_self_CastInput_2; // 0x3F0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class ABarbarous_C*                          CallFunc_GetCharacterAsBarbarous_AsBarbarous;      // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDHDialogueLine                       CallFunc_Array_Get_Item;                           // 0x408(0x20)(None)
	struct FDarkFatherChantSubtitle              K2Node_MakeStruct_DarkFatherChantSubtitle;         // 0x428(0x28)(HasGetValueTypeHash)
	TArray<struct FDarkFatherChantSubtitle>      K2Node_MakeArray_Array;                            // 0x450(0x10)(ConstParm, ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsArbNameInSetPure__IsInSet__1;           // 0x460(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BDA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_NewEntryIndex;                  // 0x464(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BDD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_2;          // 0x470(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BE2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetNamedPCInt_Value;                      // 0x47C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3BE6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_9; // 0x488(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_18;                  // 0x490(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABarbarous_C*                          CallFunc_GetCharacterAsBarbarous_AsBarbarous_1;    // 0x498(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               CallFunc_GetDeclinedDialogue_NewParam;             // 0x4A0(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               CallFunc_GetAcceptDialogue_NewParam;               // 0x4B0(0x10)(ReferenceParm, HasGetValueTypeHash)
	class ABarbarous_C*                          CallFunc_GetCharacterAsBarbarous_AsBarbarous_2;    // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x4C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayGM_C*                         CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4;  // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BF9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AAdvancedEnemySpawner_C*>       CallFunc_GetAllActorsOfClass_OutActors;            // 0x4E0(0x10)(ReferenceParm, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item_1;                         // 0x4F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x4F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BFC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAdvancedEnemySpawner_C*               K2Node_DynamicCast_AsAdvanced_Enemy_Spawner;       // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x509(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C02[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x50C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AEnemyCharacter_C*>             CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x510(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x520(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x524(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x528(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x52C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C08[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_24;           // 0x530(0x10)(ZeroConstructor, NoDestructor)
	class AActor*                                K2Node_ComponentBoundEvent_OverlappedActor_1;      // 0x540(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor_1;           // 0x548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OverlappedActor;        // 0x550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_ComponentBoundEvent_OtherActor;             // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          K2Node_DynamicCast_As0_Base;                       // 0x560(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C0E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          K2Node_DynamicCast_As0_Base_1;                     // 0x570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C10[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_CustomEvent_LP_Frequency;                   // 0x57C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_19;                  // 0x580(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_25;           // 0x588(0x10)(ZeroConstructor, NoDestructor)
	float                                        CallFunc_Lerp_ReturnValue;                         // 0x598(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C11[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_10; // 0x5A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x5A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C14[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_11; // 0x5B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          CallFunc_GetCharacterAs0_Base_As0_Base_3;          // 0x5B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_26;           // 0x5C0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x5D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable_5;                              // 0x5D4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C19[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABarbarous_C*                          CallFunc_GetCharacterAsBarbarous_AsBarbarous_3;    // 0x5E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x5E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_ItemIndex;                            // 0x5EC(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Amount;                               // 0x5F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C1F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AEnemyCharacter_C*                     CallFunc_Array_Get_Item_2;                         // 0x5F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x601(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetItemFromIndex_bFound;                  // 0x602(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C25[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        CallFunc_GetItemFromIndex_Item;                    // 0x608(0x132)(HasGetValueTypeHash)
	uint8                                        Pad_3C27[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_ConstructSoldItemAmountID_ID;             // 0x740(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value_1;                    // 0x748(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x74C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_20;                  // 0x750(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_27;           // 0x758(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_21;                  // 0x768(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_12; // 0x770(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInViewport_ReturnValue_1;               // 0x778(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x779(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C32[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_28;           // 0x77C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_3C34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABarbarous_C*                          CallFunc_GetCharacterAsBarbarous_AsBarbarous_4;    // 0x790(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_13; // 0x798(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue; // 0x7A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x7A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C35[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x7B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNamedPCInt_Value_2;                    // 0x7B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue_1;             // 0x7BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAllShellMaxedOut_bAllMaxedOut_1;        // 0x7BD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C3A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDHDialogueLine>               K2Node_Select_Default;                             // 0x7C0(0x10)(ReferenceParm, HasGetValueTypeHash)
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x7D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_22;                  // 0x7D4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDarkForm_ReturnValue;                   // 0x7DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDarkForm_ReturnValue_1;                 // 0x7DD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C42[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_29;           // 0x7E0(0x10)(ZeroConstructor, NoDestructor)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_14; // 0x7F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_15; // 0x7F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_16; // 0x800(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_NotifyName_23;                  // 0x808(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_30;           // 0x810(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  K2Node_CustomEvent_NotifyName_24;                  // 0x820(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_31;           // 0x828(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x838(0x8)(NoDestructor, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance; // 0x840(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue_1;                // 0x848(0x8)(NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x850(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface;   // 0x858(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x868(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C61[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetCurrentSubLevel_ReturnValue;           // 0x86C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLoadingScreenActive_ReturnValue;        // 0x874(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_BoughtSomething;                // 0x875(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C66[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x878(0x18)(None)
	class ABarbarous_C*                          CallFunc_GetCharacterAsBarbarous_AsBarbarous_5;    // 0x890(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_1;                              // 0x898(0x18)(None)
	bool                                         Temp_bool_Variable_6;                              // 0x8B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C6C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_1;                           // 0x8B8(0x18)(None)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_1;         // 0x8D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_7;                              // 0x8D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x8D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C71[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDHDialogueLine>               K2Node_Select_Default_2;                           // 0x8E0(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x8F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C74[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1; // 0x8F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x900(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C75[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2; // 0x908(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x910(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C78[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x918(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_1;       // 0x920(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_2;       // 0x928(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_3;       // 0x930(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_4;       // 0x938(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x940(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C7D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x950(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_5;       // 0x958(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_32;           // 0x960(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable_8;                              // 0x970(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C81[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDHDialogueLine>               K2Node_Select_Default_3;                           // 0x978(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x988(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_9;                              // 0x989(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C84[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3; // 0x990(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               K2Node_Select_Default_4;                           // 0x998(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               K2Node_Select_Default_5;                           // 0x9A8(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               K2Node_Select_Default_6;                           // 0x9B8(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               K2Node_Select_Default_7;                           // 0x9C8(0x10)(ReferenceParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0x9D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C88[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayMontageCallbackProxy*             CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4; // 0x9E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0x9E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C8C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_6;       // 0x9F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue_2;         // 0x9F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_7;       // 0xA00(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_8;       // 0xA08(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_1;          // 0xA10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3C94[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue_1;     // 0xA20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_9;       // 0xA28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0xA30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDarkForm_ReturnValue_2;                 // 0xA38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C98[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1; // 0xA40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0xA50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFoundlingMenuEnabled_Enabled;          // 0xA51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsArbNameInSetPure__IsInSet__2;           // 0xA52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShouldDoFirstRespawnDialogue__ReturnValue_2; // 0xA53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3CA0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDHDialogueLine>               K2Node_Select_Default_8;                           // 0xA58(0x10)(ReferenceParm, HasGetValueTypeHash)
	TArray<struct FDHDialogueLine>               K2Node_Select_Default_9;                           // 0xA68(0x10)(ReferenceParm, HasGetValueTypeHash)
};

}
}


