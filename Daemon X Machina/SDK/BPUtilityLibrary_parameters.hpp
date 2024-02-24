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

// 0x130 (0x130 - 0x0)
// Function BPUtilityLibrary.BPUtilityLibrary_C.SetImageToImage
struct UBPUtilityLibrary_C_SetImageToImage_Params
{
public:
	class UImage*                                TargetImage;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Image;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_41E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x20(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush1;                     // 0xA8(0x88)(None)
};

// 0x1C1 (0x1C1 - 0x0)
// Function BPUtilityLibrary.BPUtilityLibrary_C.IsSupportWeapon
struct UBPUtilityLibrary_C_IsSupportWeapon_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_431[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLSupportWeaponParamRow             CallFunc_GetDataTableRowFromName_OutRow;           // 0x18(0x1A8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x21 (0x21 - 0x0)
// Function BPUtilityLibrary.BPUtilityLibrary_C.SetWeaponVisibility
struct UBPUtilityLibrary_C_SetWeaponVisibility_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsLeft;                                            // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_445[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TargetPawn;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATTLCharacterCommon*                   K2Node_DynamicCast_AsTTLCharacter_Common;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA1 (0xA1 - 0x0)
// Function BPUtilityLibrary.BPUtilityLibrary_C.GetButtonImage
struct UBPUtilityLibrary_C_GetButtonImage_Params
{
public:
	struct FSlateBrush                           ButtonStyle;                                       // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x90(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                K2Node_DynamicCast_AsImage;                        // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA1 (0xA1 - 0x0)
// Function BPUtilityLibrary.BPUtilityLibrary_C.GetButtonMaterial
struct UBPUtilityLibrary_C_GetButtonMaterial_Params
{
public:
	struct FSlateBrush                           ButtonStyle;                                       // 0x0(0x88)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Material;                                          // 0x90(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              K2Node_DynamicCast_AsMaterial_Instance_Dynamic;    // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3C8 (0x3C8 - 0x0)
// Function BPUtilityLibrary.BPUtilityLibrary_C.CreateButtonDynamicMaterial
struct UBPUtilityLibrary_C_CreateButtonDynamicMaterial_Params
{
public:
	class UButton*                               Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    K2Node_DynamicCast_AsMaterial_Interface;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    K2Node_DynamicCast_AsMaterial_Interface1;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue1; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x40(0x88)(None)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush1;                     // 0xC8(0x88)(None)
	struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x150(0x278)(None)
};

// 0x1201 (0x1201 - 0x0)
// Function BPUtilityLibrary.BPUtilityLibrary_C.GetPartsName
struct UBPUtilityLibrary_C_GetPartsName_Params
{
public:
	struct FTTLAssemblePartsInfoRow              PartsInfo;                                         // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  PartsName;                                         // 0x28(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTTLPartsHeadParamRow                 CallFunc_GetDataTableRowFromName_OutRow;           // 0x30(0x100)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_506[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLSupportWeaponParamRow             CallFunc_GetDataTableRowFromName_OutRow1;          // 0x138(0x1A8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue1;     // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_509[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamRow                    CallFunc_GetDataTableRowFromName_OutRow2;          // 0x2E8(0x2B0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue2;     // 0x598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_50D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLMissileWeaponParamRow             CallFunc_GetDataTableRowFromName_OutRow3;          // 0x5A0(0x230)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue3;     // 0x7D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_513[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLCloseRangeWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow4;          // 0x7D8(0x1D0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue4;     // 0x9A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_516[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamRow                    CallFunc_GetDataTableRowFromName_OutRow5;          // 0x9B0(0x2B0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue5;     // 0xC60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_518[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLPartsInsideParamRow               CallFunc_GetDataTableRowFromName_OutRow6;          // 0xC68(0x120)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue6;     // 0xD88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLPartsLegsParamRow                 CallFunc_GetDataTableRowFromName_OutRow7;          // 0xD90(0x108)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue7;     // 0xE98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLPartsArmRightParamRow             CallFunc_GetDataTableRowFromName_OutRow8;          // 0xEA0(0x118)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue8;     // 0xFB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLPartsArmLeftParamRow              CallFunc_GetDataTableRowFromName_OutRow9;          // 0xFC0(0x118)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue9;     // 0x10D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_523[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLPartsBodyParamRow                 CallFunc_GetDataTableRowFromName_OutRow10;         // 0x10E0(0x120)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue10;    // 0x1200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BPUtilityLibrary.BPUtilityLibrary_C.SetEnabledLockOn
struct UBPUtilityLibrary_C_SetEnabledLockOn_Params
{
public:
	bool                                         NewEnable;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_549[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TargetActor;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LockOnTag;                                         // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_550[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ActorHasTag_ReturnValue1;                 // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8E9 (0x8E9 - 0x0)
// Function BPUtilityLibrary.BPUtilityLibrary_C.GetWeaponClass
struct UBPUtilityLibrary_C_GetWeaponClass_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Actor;                                             // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTTLSupportWeaponParamRow             CallFunc_GetDataTableRowFromName_OutRow;           // 0x18(0x1A8)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_595[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLMissileWeaponParamRow             CallFunc_GetDataTableRowFromName_OutRow1;          // 0x1C8(0x230)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue1;     // 0x3F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_598[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue;  // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue1; // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsActor;                   // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsActor1;                  // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess1;                 // 0x428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLCloseRangeWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow2;          // 0x430(0x1D0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue2;     // 0x600(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamRow                    CallFunc_GetDataTableRowFromName_OutRow3;          // 0x608(0x2B0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue3;     // 0x8B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5AA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue2; // 0x8C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_LoadWeaponClassFromAssetPtr_ReturnValue3; // 0x8C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsActor2;                  // 0x8D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess2;                 // 0x8D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_ClassDynamicCast_AsActor3;                  // 0x8E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess3;                 // 0x8E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x501 (0x501 - 0x0)
// Function BPUtilityLibrary.BPUtilityLibrary_C.IsShoulderWeapon
struct UBPUtilityLibrary_C_IsShoulderWeapon_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamRow                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x18(0x2B0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLMissileWeaponParamRow             CallFunc_GetDataTableRowFromName_OutRow1;          // 0x2D0(0x230)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue1;     // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1E9 (0x1E9 - 0x0)
// Function BPUtilityLibrary.BPUtilityLibrary_C.IsCloseRangeWeapon
struct UBPUtilityLibrary_C_IsCloseRangeWeapon_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_605[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLCloseRangeWeaponParamRow          CallFunc_GetDataTableRowFromName_OutRow;           // 0x18(0x1D0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2C9 (0x2C9 - 0x0)
// Function BPUtilityLibrary.BPUtilityLibrary_C.isWeapon
struct UBPUtilityLibrary_C_IsWeapon_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_628[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTTLWeaponParamRow                    CallFunc_GetDataTableRowFromName_OutRow;           // 0x18(0x2B0)(None)
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BPUtilityLibrary.BPUtilityLibrary_C.GetGameInstance
struct UBPUtilityLibrary_C_GetGameInstance_Params
{
public:
	class AActor*                                Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTurtleGameInstance_C*                 Result;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTurtleGameInstance_C*                 K2Node_DynamicCast_AsTurtle_Game_Instance;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


