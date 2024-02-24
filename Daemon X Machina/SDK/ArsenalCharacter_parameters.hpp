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

// 0x1A (0x1A - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.CaptureWeapon_CancelForCharacter
struct AArsenalCharacter_C_CaptureWeapon_CancelForCharacter_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_564[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArsenal_AnimBP_C*                     K2Node_DynamicCast_AsArsenal_Anim_BP;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CaptureWeapon_CancelForCharacter_ReturnValue; // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.GetPartsListID
struct AArsenalCharacter_C_GetPartsListID_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x310 (0x310 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.GetArsenalPaintInfo
struct AArsenalCharacter_C_GetArsenalPaintInfo_Params
{
public:
	struct FTTLArsenalPaintInfo                  PaintInfo;                                         // 0x0(0x310)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.PurgeCaptureWeaponMain
struct AArsenalCharacter_C_PurgeCaptureWeaponMain_Params
{
public:
	enum class ETTLArsenalCloseRangeAttackType   AttackType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ATTLWeaponBase*                        CallFunc_GetCurrentLeftCaughtWeapon_ReturnValue;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsBrokenWeapon_ReturnValue;               // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue2;         // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue3;         // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D9[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ATTLWeaponBase*                        CallFunc_GetCurrentRightCaughtWeapon_ReturnValue;  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue1;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsBrokenWeapon_ReturnValue1;              // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5EC[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCatchableActor_C*                     CallFunc_GetComponentByClass_ReturnValue;          // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.SettingInBaseCampEvent
struct AArsenalCharacter_C_SettingInBaseCampEvent_Params
{
public:
	class UArsenalParticleArmorComponent_C*      CallFunc_GetComponentByClass_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInBaseCamp_ReturnValue;                 // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.GetRightArmMesh
struct AArsenalCharacter_C_GetRightArmMesh_Params
{
public:
	class USkeletalMeshComponent*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.GetLeftArmMesh
struct AArsenalCharacter_C_GetLeftArmMesh_Params
{
public:
	class USkeletalMeshComponent*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D (0x1D - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.SetSkillListFromNPCMetaID
struct AArsenalCharacter_C_SetSkillListFromNPCMetaID_Params
{
public:
	bool                                         CallFunc_IsPlayerControlled_ReturnValue;           // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_64F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          CallFunc_GetSkillListFromNPCMetaID_List;           // 0x8(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        CallFunc_GetSkillListFromNPCMetaID_ReturnValue;    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.SetupGetOnArsenalCharacter
struct AArsenalCharacter_C_SetupGetOnArsenalCharacter_Params
{
public:
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.SetHUDComponentTickEnabled
struct AArsenalCharacter_C_SetHUDComponentTickEnabled_Params
{
public:
	bool                                         IsEnable;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x640 (0x640 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.ResetArsenalParts
struct AArsenalCharacter_C_ResetArsenalParts_Params
{
public:
	struct FTTLPlayerAssembleInfo                AssembleInfo;                                      // 0x0(0x640)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB9 (0xB9 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.SetupInnerOuterCharacter
struct AArsenalCharacter_C_SetupInnerOuterCharacter_Params
{
public:
	class AOuterInArsenalCharacter_C*            SpawnedOuterInArsenal;                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x10(0x30)(IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue1;               // 0x40(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanSpawnInnerOuter_ReturnValue;           // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerControlled_ReturnValue;           // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AOuterInArsenalCharacter_C*            CallFunc_FinishSpawningActor_ReturnValue;          // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetOuterIDFromNPCID_ReturnValue;          // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue1; // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetOuterClass_ReturnValue;                // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOuterInArsenalCharacter_C*            CallFunc_FinishSpawningActor_ReturnValue1;         // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsOuter_Character;         // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.SetupCurrentWeaponForNPC
struct AArsenalCharacter_C_SetupCurrentWeaponForNPC_Params
{
public:
	class ATTLWeaponBase*                        CallFunc_GetCurrentSupportWeapon_ReturnValue;      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_70F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ATTLWeaponBase*                        CallFunc_GetCurrentShoulderWeapon_ReturnValue;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATTLWeaponBase*                        CallFunc_GetCurrentRightWeapon_ReturnValue;        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_719[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ATTLWeaponBase*                        CallFunc_GetCurrentLeftWeapon_ReturnValue;         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerControlled_ReturnValue;           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x41 (0x41 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.SetupWeaponRack
struct AArsenalCharacter_C_SetupWeaponRack_Params
{
public:
	class ATTLWeaponBase*                        CallFunc_PickFromWeaponRack_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_753[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_FindWeaponClass_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATTLWeaponBase*                        CallFunc_SpawnCharacterWeapon_ReturnValue;         // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_FindWeaponClass_ReturnValue1;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATTLWeaponBase*                        CallFunc_SpawnCharacterWeapon_ReturnValue1;        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_756[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ATTLWeaponBase*                        CallFunc_PickFromWeaponRack_ReturnValue1;          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x311 (0x311 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.InitializePartsList
struct AArsenalCharacter_C_InitializePartsList_Params
{
public:
	struct FTTLArsenalPartsInfoList              CallFunc_InitializeNonPlayerPartsList_partsList;   // 0x0(0x310)(HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.SetWeaponRackVisibility
struct AArsenalCharacter_C_SetWeaponRackVisibility_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.CaptureWeapon_Start
struct AArsenalCharacter_C_CaptureWeapon_Start_Params
{
public:
	class APawn*                                 WeaponPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7A0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArsenal_AnimBP_C*                     K2Node_DynamicCast_AsArsenal_Anim_BP;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLanded_ReturnValue;                     // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue4;                     // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.CaptureWeapon_IsGrabControl
struct AArsenalCharacter_C_CaptureWeapon_IsGrabControl_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.InitializeArsenalSkill
struct AArsenalCharacter_C_InitializeArsenalSkill_Params
{
public:
	bool                                         SkipVP;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C30 (0x3C30 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.GetWeaponParameter
struct AArsenalCharacter_C_GetWeaponParameter_Params
{
public:
	int32                                        Position;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_887[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamBaseRow                Param;                                             // 0x8(0x128)(Parm, OutParm)
	class FName                                  RackWeaponID;                                      // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_88F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLCloseRangeWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow;           // 0x140(0x1D0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x311(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_892[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamBaseRow                CallFunc_CloseRangeParamToBaseParam_result;        // 0x318(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue; // 0x440(0x128)(None)
	struct FTTLWeaponParamRow                    CallFunc_GetDataTableRowFromName_OutRow1;          // 0x568(0x2B0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue1;     // 0x818(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x819(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_89C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamBaseRow                CallFunc_LongRangeParamToBaseParam_result;         // 0x820(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue1; // 0x948(0x128)(None)
	struct FTTLMissileWeaponParamRow             CallFunc_GetDataTableRowFromName_OutRow2;          // 0xA70(0x230)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue2;     // 0xCA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8A2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLCloseRangeWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow3;          // 0xCA8(0x1D0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue3;     // 0xE78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8A5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamBaseRow                CallFunc_CloseRangeParamToBaseParam_result1;       // 0xE80(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_MissileParamToBaseParam_result;           // 0xFA8(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue2; // 0x10D0(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue3; // 0x11F8(0x128)(None)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0x1320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue4;                     // 0x1321(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8B3[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLCloseRangeWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow4;          // 0x1328(0x1D0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue4;     // 0x14F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8B6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamBaseRow                CallFunc_CloseRangeParamToBaseParam_result2;       // 0x1500(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue4; // 0x1628(0x128)(None)
	struct FTTLWeaponParamRow                    CallFunc_GetDataTableRowFromName_OutRow5;          // 0x1750(0x2B0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue5;     // 0x1A00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue5;                     // 0x1A01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8BF[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamBaseRow                CallFunc_LongRangeParamToBaseParam_result1;        // 0x1A08(0x128)(None)
	struct FTTLWeaponParamRow                    CallFunc_GetDataTableRowFromName_OutRow6;          // 0x1B30(0x2B0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue6;     // 0x1DE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8C3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamBaseRow                CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue5; // 0x1DE8(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_LongRangeParamToBaseParam_result2;        // 0x1F10(0x128)(None)
	class FName                                  CallFunc_GetRightWeaponRackIDandAttachment_weaponID; // 0x2038(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRightWeaponRackIDandAttachment_Attachment1; // 0x2040(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRightWeaponRackIDandAttachment_Attachment2; // 0x2048(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetRightWeaponRackIDandAttachment_Attachment3; // 0x2050(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTTLWeaponParamBaseRow                CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue6; // 0x2058(0x128)(None)
	class FName                                  CallFunc_GetLeftWeaponRackIDandAttachment_weaponID; // 0x2180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetLeftWeaponRackIDandAttachment_Attachment1; // 0x2188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetLeftWeaponRackIDandAttachment_Attachment2; // 0x2190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetLeftWeaponRackIDandAttachment_Attachment3; // 0x2198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue6;                     // 0x21A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8DB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLCloseRangeWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow7;          // 0x21A8(0x1D0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue7;     // 0x2378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue7;                     // 0x2379(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8E0[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamBaseRow                CallFunc_CloseRangeParamToBaseParam_result3;       // 0x2380(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue7; // 0x24A8(0x128)(None)
	struct FTTLSupportWeaponParamRow             CallFunc_GetDataTableRowFromName_OutRow8;          // 0x25D0(0x1A8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue8;     // 0x2778(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8E5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLCloseRangeWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow9;          // 0x2780(0x1D0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue9;     // 0x2950(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8E8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamRow                    CallFunc_GetDataTableRowFromName_OutRow10;         // 0x2958(0x2B0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue10;    // 0x2C08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_8EC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamBaseRow                CallFunc_LongRangeParamToBaseParam_result3;        // 0x2C10(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_CloseRangeParamToBaseParam_result4;       // 0x2D38(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue8; // 0x2E60(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue9; // 0x2F88(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_SupportWeaponParamToBaseParam_result;     // 0x30B0(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue10; // 0x31D8(0x128)(None)
	struct FTTLCloseRangeWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow11;         // 0x3300(0x1D0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue11;    // 0x34D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_900[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamBaseRow                CallFunc_CloseRangeParamToBaseParam_result5;       // 0x34D8(0x128)(None)
	struct FTTLWeaponParamRow                    CallFunc_GetDataTableRowFromName_OutRow12;         // 0x3600(0x2B0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue12;    // 0x38B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_908[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamBaseRow                CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue11; // 0x38B8(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_LongRangeParamToBaseParam_result4;        // 0x39E0(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_CalcWeaponBaseParameterWithAttachment_ReturnValue12; // 0x3B08(0x128)(None)
};

// 0xF90 (0xF90 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.CalcArsenalParameter
struct AArsenalCharacter_C_CalcArsenalParameter_Params
{
public:
	class UChaseAutoRunComponent_C*              CallFunc_GetComponentByClass_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTTLWeaponParamBaseRow                CallFunc_GetWeaponParameter_Param;                 // 0x8(0x128)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_999[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamBaseRow                CallFunc_GetWeaponParameter_Param1;                // 0x138(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_GetWeaponParameter_Param2;                // 0x260(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_GetWeaponParameter_Param3;                // 0x388(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_GetWeaponParameter_Param4;                // 0x4B0(0x128)(None)
	struct FTTLWeaponParamBaseRow                CallFunc_GetWeaponParameter_Param5;                // 0x5D8(0x128)(None)
	struct FTTLPartsArmRightParamRow             CallFunc_CalcArmRightParameterWithAttachment_outParameter; // 0x700(0x118)(None)
	bool                                         CallFunc_CalcArmRightParameterWithAttachment_ReturnValue; // 0x818(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_99E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLPartsArmLeftParamRow              CallFunc_CalcArmLeftParameterWithAttachment_outParameter; // 0x820(0x118)(None)
	bool                                         CallFunc_CalcArmLeftParameterWithAttachment_ReturnValue; // 0x938(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9A0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLPartsLegsParamRow                 CallFunc_CalcLegsParameterWithAttachment_outParameter; // 0x940(0x108)(None)
	bool                                         CallFunc_CalcLegsParameterWithAttachment_ReturnValue; // 0xA48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9A2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLPartsInsideParamRow               CallFunc_CalcInsideParameterWithAttachment_outParameter; // 0xA50(0x120)(None)
	bool                                         CallFunc_CalcInsideParameterWithAttachment_ReturnValue; // 0xB70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9A9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLPartsBodyParamRow                 CallFunc_CalcBodyParameterWithAttachment_outParameter; // 0xB78(0x120)(None)
	bool                                         CallFunc_CalcBodyParameterWithAttachment_ReturnValue; // 0xC98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9AB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLPartsHeadParamRow                 CallFunc_CalcHeadParameterWithAttachment_outParameter; // 0xCA0(0x100)(None)
	bool                                         CallFunc_CalcHeadParameterWithAttachment_ReturnValue; // 0xDA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9AD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTurtleGameInstance_C*                 CallFunc_GetGameInstance_Result;                   // 0xDA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTTLPartsTotalParam                   CallFunc_CalcArsenalTotalParam_TotalParam;         // 0xDB0(0x1D8)(None)
	class UTTLBasicStatusComponent*              CallFunc_CalcBasicStatus_BasicStatus;              // 0xF88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1621 (0x1621 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.CreateWeaponClassFromPartsInfo
struct AArsenalCharacter_C_CreateWeaponClassFromPartsInfo_Params
{
public:
	struct FTTLWeaponParamRow                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x0(0x2B0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9DD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamRow                    CallFunc_GetDataTableRowFromName_OutRow1;          // 0x2B8(0x2B0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue1;     // 0x568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9DF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue;  // 0x570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue1; // 0x578(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsTTLShoulder_Weapon_Base; // 0x580(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x588(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9E2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsTTLSupport_Weapon_Base;  // 0x590(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess1;                 // 0x598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9E4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLMissileWeaponParamRow             CallFunc_GetDataTableRowFromName_OutRow2;          // 0x5A0(0x230)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue2;     // 0x7D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9E7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLSupportWeaponParamRow             CallFunc_GetDataTableRowFromName_OutRow3;          // 0x7D8(0x1A8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue3;     // 0x980(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9E9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue2; // 0x988(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue3; // 0x990(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsTTLSupport_Weapon_Base1; // 0x998(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess2;                 // 0x9A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9EB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsTTLShoulder_Missile_Pot; // 0x9A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess3;                 // 0x9B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x9B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue1;         // 0x9B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9EE[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamRow                    CallFunc_GetDataTableRowFromName_OutRow4;          // 0x9B8(0x2B0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue4;     // 0xC68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9EF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLCloseRangeWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow5;          // 0xC70(0x1D0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue5;     // 0xE40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9F3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue4; // 0xE48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue5; // 0xE50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsTTLWeapon_Shield;        // 0xE58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess4;                 // 0xE60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9F5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsLong_Range_Weapon_Common; // 0xE68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess5;                 // 0xE70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9F8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsClose_Range_Weapon_Common; // 0xE78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess6;                 // 0xE80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9FC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamRow                    CallFunc_GetDataTableRowFromName_OutRow6;          // 0xE88(0x2B0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue6;     // 0x1138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_9FE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLCloseRangeWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow7;          // 0x1140(0x1D0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue7;     // 0x1310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A05[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue6; // 0x1318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue7; // 0x1320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsTTLWeapon_Shield1;       // 0x1328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess7;                 // 0x1330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A09[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsLong_Range_Weapon_Common1; // 0x1338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess8;                 // 0x1340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A0A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsClose_Range_Weapon_Common1; // 0x1348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess9;                 // 0x1350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A0C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamRow                    CallFunc_GetDataTableRowFromName_OutRow8;          // 0x1358(0x2B0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue8;     // 0x1608(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A0D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue8; // 0x1610(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsLong_Range_Weapon_Common2; // 0x1618(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess10;                // 0x1620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.CreatePartsFromPartsInfo
struct AArsenalCharacter_C_CreatePartsFromPartsInfo_Params
{
public:
	bool                                         CreatPartsResult;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_A2F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLArsenalPartsPaintInfo             K2Node_MakeStruct_TTLArsenalPartsPaintInfo;        // 0x8(0x98)(NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.GetMeshForShoulderWeaponLeft
struct AArsenalCharacter_C_GetMeshForShoulderWeaponLeft_Params
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.GetMeshForWeaponRight
struct AArsenalCharacter_C_GetMeshForWeaponRight_Params
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.GetMeshForWeaponLeft
struct AArsenalCharacter_C_GetMeshForWeaponLeft_Params
{
public:
	class USkeletalMeshComponent*                Mesh;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.UserConstructionScript
struct AArsenalCharacter_C_UserConstructionScript_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.MulticastArsenalPreGetOn
struct AArsenalCharacter_C_MulticastArsenalPreGetOn_Params
{
public:
	class AArsenalController_C*                  SrcController;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseCharacter_C*                      OuterCharacter;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATTLCharacterCommon*                   OldArsenal;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.OnEndOuterGetOnMotion
struct AArsenalCharacter_C_OnEndOuterGetOnMotion_Params
{
public:
	class AActor*                                OuterCharacter;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.OnGetOnComplete
struct AArsenalCharacter_C_OnGetOnComplete_Params
{
public:
	enum class ETTLEStatusType                   OuterStatus;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A6F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalController_C*                  Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOuterCharacter_C*                     Outer;                                             // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          OuterSkill;                                        // 0x18(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.OnChangeArsenalCommon
struct AArsenalCharacter_C_OnChangeArsenalCommon_Params
{
public:
	enum class ETTLEStatusType                   NewStatusType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A7E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          SkillList;                                         // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x19 (0x19 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.LatentActionAfterGetOnCameraWait
struct AArsenalCharacter_C_LatentActionAfterGetOnCameraWait_Params
{
public:
	class ATTLPlayerController*                  PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          SkillList;                                         // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	enum class ETTLEStatusType                   OuterStatus;                                       // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.AttachLongRangeWeaponLeft
struct AArsenalCharacter_C_AttachLongRangeWeaponLeft_Params
{
public:
	class USceneComponent*                       WeaponMesh;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.AttachCloseRangeWeaponLeft
struct AArsenalCharacter_C_AttachCloseRangeWeaponLeft_Params
{
public:
	class USceneComponent*                       WeaponMesh;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SocketName;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.AttachLongRangeWeaponRight
struct AArsenalCharacter_C_AttachLongRangeWeaponRight_Params
{
public:
	class USceneComponent*                       WeaponMesh;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.AttachCloseRangeWeaponRight
struct AArsenalCharacter_C_AttachCloseRangeWeaponRight_Params
{
public:
	class USceneComponent*                       WeaponMesh;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SocketName;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.OnArsenalGetOnCommon
struct AArsenalCharacter_C_OnArsenalGetOnCommon_Params
{
public:
	enum class ETTLEStatusType                   NewStatusType;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsChangeArsenal;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ADA[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          SkillList;                                         // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x19 (0x19 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.OnArsenalGetOn
struct AArsenalCharacter_C_OnArsenalGetOn_Params
{
public:
	bool                                         IsChangeArsenal;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_AE7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          SkillList;                                         // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	enum class ETTLEStatusType                   NewStatusType;                                     // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.StartGetOnArsenal
struct AArsenalCharacter_C_StartGetOnArsenal_Params
{
public:
	bool                                         IsChangeArsenal;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B0E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          SkillList;                                         // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	enum class ETTLEStatusType                   NewStatusType;                                     // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.OnBadStatusVFXStart
struct AArsenalCharacter_C_OnBadStatusVFXStart_Params
{
public:
	enum class ETTLEAbnormalStatusType           Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B15[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTTLBadStatusVFXComponent*             badStatusComp;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHeal;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.OnBadStatusVFXEnd
struct AArsenalCharacter_C_OnBadStatusVFXEnd_Params
{
public:
	enum class ETTLEAbnormalStatusType           Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B19[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTTLBadStatusVFXComponent*             badStatusComp;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHeal;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.SetEventFinish
struct AArsenalCharacter_C_SetEventFinish_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.SetEventStart
struct AArsenalCharacter_C_SetEventStart_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.SetEventResumeGame
struct AArsenalCharacter_C_SetEventResumeGame_Params
{
public:
	class FName                                  EventName;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.PurgeCaptureWeapon
struct AArsenalCharacter_C_PurgeCaptureWeapon_Params
{
public:
	enum class ETTLArsenalCloseRangeAttackType   AttackType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.AttachShoulderWeapon
struct AArsenalCharacter_C_AttachShoulderWeapon_Params
{
public:
	class ATTLWeaponBase*                        Weapon;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x640 (0x640 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.ResetArsenalPartsBp
struct AArsenalCharacter_C_ResetArsenalPartsBp_Params
{
public:
	struct FTTLPlayerAssembleInfo                AssembleInfo;                                      // 0x0(0x640)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x310 (0x310 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.SetPaintInfo
struct AArsenalCharacter_C_SetPaintInfo_Params
{
public:
	struct FTTLArsenalPaintInfo                  PaintInfo;                                         // 0x0(0x310)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.SetPartsListIDBP
struct AArsenalCharacter_C_SetPartsListIDBP_Params
{
public:
	class FName                                  PartsListID;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.InitializeHUD
struct AArsenalCharacter_C_InitializeHUD_Params
{
public:
	bool                                         TickEnabled;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.InitializeArsenalPaint
struct AArsenalCharacter_C_InitializeArsenalPaint_Params
{
public:
	class UTTLArsenalPaintComponent*             PaintComponent;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.CancelCloseRangeAttack
struct AArsenalCharacter_C_CancelCloseRangeAttack_Params
{
public:
	enum class ETTLArsenalCloseRangeAttackType   AttackType;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x640 (0x640 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.SetAssembleInfo
struct AArsenalCharacter_C_SetAssembleInfo_Params
{
public:
	struct FTTLPlayerAssembleInfo                AssembleInfo;                                      // 0x0(0x640)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18D8 (0x18D8 - 0x0)
// Function ArsenalCharacter.ArsenalCharacter_C.ExecuteUbergraph_ArsenalCharacter
struct AArsenalCharacter_C_ExecuteUbergraph_ArsenalCharacter_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BCE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalController_C*                  K2Node_CustomEvent_SrcController;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABaseCharacter_C*                      K2Node_CustomEvent_OuterCharacter1;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATTLCharacterCommon*                   K2Node_CustomEvent_OldArsenal;                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AArsenalCharacter_C*                   K2Node_DynamicCast_AsArsenal_Character;            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BD3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AOuterCharacter_C*                     K2Node_DynamicCast_AsOuter_Character;              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BD5[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Temp_struct_Variable;                              // 0x40(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class UPlayerLightningMovement_C*            CallFunc_AddComponent_ReturnValue;                 // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue1;                     // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BD6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_outerCharacter;                 // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOuterCharacter_C*                     K2Node_DynamicCast_AsOuter_Character1;             // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess2;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue2;                     // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BD9[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AArsenalController_C*                  K2Node_DynamicCast_AsArsenal_Controller;           // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess3;                      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETTLEStatusType                   K2Node_CustomEvent_OuterStatus;                    // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BDF[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalController_C*                  K2Node_CustomEvent_Target;                         // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOuterCharacter_C*                     K2Node_CustomEvent_Outer;                          // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          K2Node_CustomEvent_OuterSkill;                     // 0xC0(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue3;                     // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETTLEStatusType                   K2Node_CustomEvent_NewStatusType3;                 // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BE4[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          K2Node_CustomEvent_SkillList3;                     // 0xD8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_ProcessGetOnArsenalCompleted_IsChange;    // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue4;                     // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BE6[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArsenal_AnimBP_C*                     K2Node_DynamicCast_AsArsenal_Anim_BP;              // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess4;                      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BE8[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ATTLPlayerController*                  K2Node_Event_playerController;                     // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          K2Node_Event_skillList;                            // 0x110(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	enum class ETTLEStatusType                   K2Node_Event_outerStatus;                          // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue5;                     // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BEC[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           CallFunc_GetController_ReturnValue1;               // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckControllerForClientGetonfinish_ReturnValue; // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BEE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AArsenalController_C*                  K2Node_DynamicCast_AsArsenal_Controller1;          // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess5;                      // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ProcessGetOnArsenalCompleted_IsChange1;   // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalController_ReturnValue;            // 0x142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue6;                     // 0x143(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BF3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue1;             // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UArsenal_AnimBP_C*                     K2Node_DynamicCast_AsArsenal_Anim_BP1;             // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess6;                      // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BF6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       K2Node_Event_WeaponMesh3;                          // 0x160(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       K2Node_Event_WeaponMesh2;                          // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_SocketName1;                          // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       K2Node_Event_WeaponMesh1;                          // 0x178(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       K2Node_Event_WeaponMesh;                           // 0x180(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_SocketName;                           // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETTLEStatusType                   K2Node_CustomEvent_NewStatusType2;                 // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsChangeArsenal2;               // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BFD[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          K2Node_CustomEvent_SkillList2;                     // 0x198(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue1;        // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue2;        // 0x1AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue3;        // 0x1AB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue4;        // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue5;        // 0x1AD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C01[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UArsenalMovement_C*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x1B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULockonComponent_C*                    CallFunc_GetComponentByClass_ReturnValue1;         // 0x1B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue6;        // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue7;        // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_IsChangeArsenal1;               // 0x1C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C03[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          K2Node_CustomEvent_SkillList1;                     // 0x1C8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	enum class ETTLEStatusType                   K2Node_CustomEvent_NewStatusType1;                 // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_NameName_ReturnValue;            // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_IsChangeArsenal;                // 0x1DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C05[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          K2Node_CustomEvent_SkillList;                      // 0x1E0(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	enum class ETTLEStatusType                   K2Node_CustomEvent_NewStatusType;                  // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C07[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x1F4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTTLArsenalDestroyPartsComponent*      CallFunc_GetComponentByClass_ReturnValue2;         // 0x200(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x208(0xC)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCompletelyDestroyed_ReturnValue;        // 0x214(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCompletelyDestroyed_ReturnValue1;       // 0x215(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x216(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue1;                 // 0x217(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETTLEAbnormalStatusType           K2Node_Event_Type1;                                // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C0C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTTLBadStatusVFXComponent*             K2Node_Event_badStatusComp1;                       // 0x220(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_isHeal1;                              // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETTLEAbnormalStatusType           K2Node_Event_Type;                                 // 0x229(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C0F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTTLBadStatusVFXComponent*             K2Node_Event_badStatusComp;                        // 0x230(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_isHeal;                               // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x23A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue1;                   // 0x23B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue1;                  // 0x23C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C13[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_EventName2;                           // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_EventName1;                           // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x250(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x265(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_StartUseCaptureWeaponCPP_ReturnValue;     // 0x266(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue7;                     // 0x267(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue2;             // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDemoArsenal_AnimBP_C*                 K2Node_DynamicCast_AsDemo_Arsenal_Anim_BP;         // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess7;                      // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue8;                     // 0x279(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C21[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  K2Node_Event_EventName;                            // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTTLPlayerAssembleInfo                K2Node_MakeStruct_TTLPlayerAssembleInfo;           // 0x288(0x640)(None)
	bool                                         CallFunc_IsCompletelyDestroyed_ReturnValue2;       // 0x8C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCompletelyDestroyed_ReturnValue3;       // 0x8C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x8CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETTLArsenalCloseRangeAttackType   K2Node_Event_attackType1;                          // 0x8CB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C27[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ATTLWeaponBase*                        K2Node_Event_Weapon;                               // 0x8D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>        K2Node_MakeArray_Array;                            // 0x8D8(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class USkeletalMeshComponent*>        CallFunc_GetMovableUnits_MeshList_outArray;        // 0x8E8(0x10)(ZeroConstructor, ReferenceParm)
	struct FTTLPlayerAssembleInfo                K2Node_Event_assembleInfo1;                        // 0x8F8(0x640)(ConstParm)
	struct FTTLArsenalPaintInfo                  K2Node_Event_paintInfo;                            // 0xF38(0x310)(ConstParm, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Event_partsListID;                          // 0x1248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_SetupAndGetRandomPartsID_partsID;         // 0x1250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetupAndGetRandomPartsID_ReturnValue;     // 0x1258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C2F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate1;             // 0x1260(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_tickEnabled;                          // 0x1270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C34[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTTLArsenalPaintComponent*             K2Node_Event_paintComponent;                       // 0x1278(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETTLArsenalCloseRangeAttackType   K2Node_Event_attackType;                           // 0x1280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C38[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraComponent*                      CallFunc_GetComponentByClass_ReturnValue3;         // 0x1288(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue9;                     // 0x1290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C3A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue1;             // 0x1294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTTLPlayerAssembleInfo                K2Node_Event_assembleInfo;                         // 0x1298(0x640)(ConstParm)
};

}
}


