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

// 0x10 (0x10 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.UpdateDye
struct ABP_EquipmentMenuShellDisplay_C_UpdateDye_Params
{
public:
	enum class Enum_ShellDye                     CustomDyeValue;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B3D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         CallFunc_GetMeshForArmorType_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4C (0x4C - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.GetWeaponSocket
struct ABP_EquipmentMenuShellDisplay_C_GetWeaponSocket_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B67[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Temp_name_Variable;                                // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_1;                              // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_3;                              // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_4;                              // 0x2C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_5;                              // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_6;                              // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_Select_Default;                             // 0x44(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.SetCorrectAnimation
struct ABP_EquipmentMenuShellDisplay_C_SetCorrectAnimation_Params
{
public:
	class UBlendSpaceBase*                       CallFunc_GetWeaponAnimation_ReturnValue;           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.GetWeaponAnimation
struct ABP_EquipmentMenuShellDisplay_C_GetWeaponAnimation_Params
{
public:
	class UBlendSpaceBase*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       Temp_byte_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BB6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UBlendSpaceBase*                       Temp_object_Variable;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpaceBase*                       Temp_object_Variable_1;                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpaceBase*                       Temp_object_Variable_2;                            // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpaceBase*                       Temp_object_Variable_3;                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpaceBase*                       Temp_object_Variable_4;                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpaceBase*                       Temp_object_Variable_5;                            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpaceBase*                       Temp_object_Variable_6;                            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBlendSpaceBase*                       K2Node_Select_Default;                             // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.SetWaponMaterials
struct ABP_EquipmentMenuShellDisplay_C_SetWaponMaterials_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.HadernCheck
struct ABP_EquipmentMenuShellDisplay_C_HadernCheck_Params
{
public:
	bool                                         CallFunc_IsHadernContentEnabled_ReturnValue;       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.Set_DeselectShell
struct ABP_EquipmentMenuShellDisplay_C_Set_DeselectShell_Params
{
public:
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_RadialBlur_C*                      CallFunc_FinishSpawningActor_ReturnValue;          // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x63 (0x63 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.SetWeapon
struct ABP_EquipmentMenuShellDisplay_C_SetWeapon_Params
{
public:
	class FName                                  CallFunc_GetWeaponSocket_ReturnValue;              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C78[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetWeaponSocket_ReturnValue_1;            // 0xC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_1;       // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_2;       // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C81[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetWeaponSocket_ReturnValue_2;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_3;       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_4;       // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C89[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetWeaponSocket_ReturnValue_3;            // 0x24(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_5;       // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C8D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetWeaponSocket_ReturnValue_4;            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_6;       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C93[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetWeaponSocket_ReturnValue_5;            // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue_7;       // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x45(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C99[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACharacter*                            CallFunc_GetPlayerCharacter_ReturnValue;           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface;     // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShellHasBeenFound_ReturnValue;            // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EComboTypes                       CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon;    // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.ShowDetails
struct ABP_EquipmentMenuShellDisplay_C_ShowDetails_Params
{
public:
	class FText                                  CallFunc_GetShellName_ReturnValue;                 // 0x0(0x18)(None)
	class FText                                  CallFunc_GetShellTagline_ShellTagline;             // 0x18(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x60(0x18)(None)
};

// 0x29 (0x29 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.Show_ShellName
struct ABP_EquipmentMenuShellDisplay_C_Show_ShellName_Params
{
public:
	class FText                                  CallFunc_GetShellName_ReturnValue;                 // 0x0(0x18)(None)
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShellName_C*                          K2Node_DynamicCast_AsShell_Name;                   // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.Hide_ShellName
struct ABP_EquipmentMenuShellDisplay_C_Hide_ShellName_Params
{
public:
	class UUserWidget*                           CallFunc_GetUserWidgetObject_ReturnValue;          // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UShellName_C*                          K2Node_DynamicCast_AsShell_Name;                   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.Mouse_Unhover
struct ABP_EquipmentMenuShellDisplay_C_Mouse_Unhover_Params
{
public:
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.Mouse_Hover
struct ABP_EquipmentMenuShellDisplay_C_Mouse_Hover_Params
{
public:
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.Set_SelectShell
struct ABP_EquipmentMenuShellDisplay_C_Set_SelectShell_Params
{
public:
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x0(0x8)(NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x10(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_RadialBlur_C*                      CallFunc_FinishSpawningActor_ReturnValue;          // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.Set_Unhover
struct ABP_EquipmentMenuShellDisplay_C_Set_Unhover_Params
{
public:
	bool                                         SkipSound;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.Set_Hover
struct ABP_EquipmentMenuShellDisplay_C_Set_Hover_Params
{
public:
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.SetShellMaterials
struct ABP_EquipmentMenuShellDisplay_C_SetShellMaterials_Params
{
public:
	bool                                         bReinitPose;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E01[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E02[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         CallFunc_GetMeshForArmorType_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShellHasBeenFound_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1A (0x1A - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.ShellHasBeenFound
struct ABP_EquipmentMenuShellDisplay_C_ShellHasBeenFound_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         Local_Unlocked;                                    // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E2C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetShellUnlockID_ShellUnlockID;           // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x70 (0x70 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.GetShellName
struct ABP_EquipmentMenuShellDisplay_C_GetShellName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E52[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x20(0x18)(None)
	bool                                         CallFunc_ShellHasBeenFound_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E58[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetShellName_ShellName;                   // 0x40(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x58(0x18)(None)
};

// 0x4 (0x4 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.SetState
struct ABP_EquipmentMenuShellDisplay_C_SetState_Params
{
public:
	enum class EEquipmentMenuShellTabState       State;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Visibility;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Local_Visibility;                                  // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xE4 (0xE4 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.HandleParallax
struct ABP_EquipmentMenuShellDisplay_C_HandleParallax_Params
{
public:
	struct FVector2D                             NormalizedMousePos;                                // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_GetMousePosFromCenterOfScreen_Position;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetUpVector_ReturnValue;                  // 0x10(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetRightVector_ReturnValue;               // 0x1C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_X;                          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector2D_Y;                          // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue;              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MapRangeClamped_ReturnValue_1;            // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x44(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetRelativeLocation_SweepHitResult;    // 0x5C(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x4 (0x4 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.ReceiveTick
struct ABP_EquipmentMenuShellDisplay_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature
struct ABP_EquipmentMenuShellDisplay_C_BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentEndCursorOverSignature__DelegateSignature
struct ABP_EquipmentMenuShellDisplay_C_BndEvt__Box_K2Node_ComponentBoundEvent_4_ComponentEndCursorOverSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentOnClickedSignature__DelegateSignature
struct ABP_EquipmentMenuShellDisplay_C_BndEvt__Box_K2Node_ComponentBoundEvent_5_ComponentOnClickedSignature__DelegateSignature_Params
{
public:
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  ButtonPressed;                                     // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x79 (0x79 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.ExecuteUbergraph_BP_EquipmentMenuShellDisplay
struct ABP_EquipmentMenuShellDisplay_C_ExecuteUbergraph_BP_EquipmentMenuShellDisplay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_FB3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IGamePlayGameStateInterface_C> K2Node_DynamicCast_AsGame_Play_Game_State_Interface; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FBD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_Event_DeltaSeconds;                         // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsMouseMoving_IsMoving;                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_FC5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            CallFunc_GetMaterials_ReturnValue;                 // 0x38(0x10)(ReferenceParm, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_TouchedComponent_2;     // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_TouchedComponent_1;     // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_ComponentBoundEvent_TouchedComponent;       // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_ComponentBoundEvent_ButtonPressed;          // 0x60(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_EquipmentMenuShellDisplay.BP_EquipmentMenuShellDisplay_C.OnShellDisplayHovered__DelegateSignature
struct ABP_EquipmentMenuShellDisplay_C_OnShellDisplayHovered__DelegateSignature_Params
{
public:
	class AActor*                                HoveredShell;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


