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

// 0x11 (0x11 - 0x0)
// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.GetGrindingTutorialHandle
struct ABP_Onboarding_Manager_C_GetGrindingTutorialHandle_Params
{
public:
	struct FDataTableRowHandle                   GrindingTutorialHandle;                            // 0x0(0x10)(Parm, OutParm, NoDestructor)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.ReceiveTick
struct ABP_Onboarding_Manager_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnTutorialActivated
struct ABP_Onboarding_Manager_C_OnTutorialActivated_Params
{
public:
	class AGGPlayerController*                   PC;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               Goat;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.GoatTowerSynched
struct ABP_Onboarding_Manager_C_GoatTowerSynched_Params
{
public:
	class AGGGoat*                               Goat;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnMoveCameraRemoved
struct ABP_Onboarding_Manager_C_OnMoveCameraRemoved_Params
{
public:
	class AGGTutorial*                           Tutorial;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnMovementTutorial2Removed
struct ABP_Onboarding_Manager_C_OnMovementTutorial2Removed_Params
{
public:
	class AGGTutorial*                           Tutorial;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnIntroTutorialRemoved
struct ABP_Onboarding_Manager_C_OnIntroTutorialRemoved_Params
{
public:
	class AGGTutorial*                           Tutorial;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnHeadbuttTutorialRemoved
struct ABP_Onboarding_Manager_C_OnHeadbuttTutorialRemoved_Params
{
public:
	class AGGTutorial*                           Tutorial;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnLIckTutorialRemoved
struct ABP_Onboarding_Manager_C_OnLIckTutorialRemoved_Params
{
public:
	class AGGTutorial*                           Tutorial;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnCreateBasicMechanics2
struct ABP_Onboarding_Manager_C_OnCreateBasicMechanics2_Params
{
public:
	class AGGTutorial*                           Tutorial;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnMobileJumpTutorialRemoved
struct ABP_Onboarding_Manager_C_OnMobileJumpTutorialRemoved_Params
{
public:
	class AGGTutorial*                           Tutorial;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnMobileHeadbuttTutorialRemoved
struct ABP_Onboarding_Manager_C_OnMobileHeadbuttTutorialRemoved_Params
{
public:
	class AGGTutorial*                           Tutorial;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.OnMobileLickTutorialRemoved
struct ABP_Onboarding_Manager_C_OnMobileLickTutorialRemoved_Params
{
public:
	class AGGTutorial*                           Tutorial;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x378 (0x378 - 0x0)
// Function BP_Onboarding_Manager.BP_Onboarding_Manager_C.ExecuteUbergraph_BP_Onboarding_Manager
struct ABP_Onboarding_Manager_C_ExecuteUbergraph_BP_Onboarding_Manager_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x24(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x34(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_EA0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array;                            // 0x48(0x10)(ConstParm, ReferenceParm)
	TArray<enum class EObjectTypeQuery>          K2Node_MakeArray_Array_1;                          // 0x58(0x10)(ConstParm, ReferenceParm)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x6C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_EA7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   K2Node_Event_PC;                                   // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               K2Node_Event_Goat;                                 // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x90(0x10)(ZeroConstructor, NoDestructor)
	TArray<class ABP_GoatTower_C*>               CallFunc_GetAllActorsOfClass_OutActors;            // 0xA0(0x10)(ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0xB0(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EAE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               K2Node_CustomEvent_Goat;                           // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetOwningPlayer_ReturnValue;              // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               CallFunc_GetControlledGoat_ReturnValue;            // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetOwningPlayer_ReturnValue_1;            // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xE8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EB5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGGoat*                               CallFunc_GetControlledGoat_ReturnValue_1;          // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               CallFunc_GetControlledGoat_ReturnValue_2;          // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsClimbingLadder_ReturnValue;             // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EC0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x114(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetOwningPlayer_ReturnValue_3;            // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               CallFunc_GetControlledGoat_ReturnValue_3;          // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetOwningPlayer_ReturnValue_4;            // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGGoat*                               CallFunc_GetControlledGoat_ReturnValue_4;          // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGrinding_ReturnValue;                   // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ECC[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        Temp_object_Variable;                              // 0x148(0x10)(ConstParm, ReferenceParm)
	TArray<class AActor*>                        Temp_object_Variable_1;                            // 0x158(0x10)(ConstParm, ReferenceParm)
	TArray<class AActor*>                        CallFunc_SphereOverlapActors_OutActors;            // 0x168(0x10)(ReferenceParm)
	bool                                         CallFunc_SphereOverlapActors_ReturnValue;          // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ED3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_SphereOverlapActors_OutActors_1;          // 0x180(0x10)(ReferenceParm)
	bool                                         CallFunc_SphereOverlapActors_ReturnValue_1;        // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_ED5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x19C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x19D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EDD[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x1A0(0x10)(ZeroConstructor, NoDestructor)
	class AGGTutorial*                           K2Node_CustomEvent_Tutorial_8;                     // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetOwningPlayer_ReturnValue_5;            // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetOwningPlayer_ReturnValue_6;            // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGTutorial*                           K2Node_CustomEvent_Tutorial_7;                     // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetOwningPlayer_ReturnValue_7;            // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGTutorial*                           K2Node_CustomEvent_Tutorial_6;                     // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EF1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_GoatTower_C*                       CallFunc_Array_Get_Item;                           // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetOwningPlayer_ReturnValue_8;            // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGTutorial*                           K2Node_CustomEvent_Tutorial_5;                     // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetOwningPlayer_ReturnValue_9;            // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGTutorial*                           K2Node_CustomEvent_Tutorial_4;                     // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGPlayerController*                   CallFunc_GetOwningPlayer_ReturnValue_10;           // 0x210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGTutorial*                           K2Node_CustomEvent_Tutorial_3;                     // 0x218(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGTutorial*                           CallFunc_CreateTutorial_OutCreatedTutorial;        // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreateTutorial_ReturnValue;               // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EFF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGTutorial*                           CallFunc_CreateTutorial_OutCreatedTutorial_1;      // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreateTutorial_ReturnValue_1;             // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F03[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGTutorial*                           CallFunc_CreateTutorial_OutCreatedTutorial_2;      // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreateTutorial_ReturnValue_2;             // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F06[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGTutorial*                           CallFunc_CreateTutorial_OutCreatedTutorial_3;      // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreateTutorial_ReturnValue_3;             // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveTutorial_ReturnValue;               // 0x259(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveTutorial_ReturnValue_1;             // 0x25A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F15[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGTutorial*                           CallFunc_CreateTutorial_OutCreatedTutorial_4;      // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreateTutorial_ReturnValue_4;             // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F1A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGTutorial*                           CallFunc_CreateTutorial_OutCreatedTutorial_5;      // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreateTutorial_ReturnValue_5;             // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F1F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGTutorial*                           CallFunc_CreateTutorial_OutCreatedTutorial_6;      // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreateTutorial_ReturnValue_6;             // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F25[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_GetGrindingTutorialHandle_GrindingTutorialHandle; // 0x290(0x10)(NoDestructor)
	class AGGTutorial*                           CallFunc_CreateTutorial_OutCreatedTutorial_7;      // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreateTutorial_ReturnValue_7;             // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveTutorial_ReturnValue_2;             // 0x2A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F2C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CallFunc_GetGrindingTutorialHandle_GrindingTutorialHandle_1; // 0x2B0(0x10)(NoDestructor)
	bool                                         CallFunc_IsMobilePlatform_ReturnValue;             // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_RemoveTutorial_ReturnValue_3;             // 0x2C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F39[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGTutorial*                           CallFunc_CreateTutorial_OutCreatedTutorial_8;      // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreateTutorial_ReturnValue_8;             // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F3E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetOwningPlayer_ReturnValue_11;           // 0x2D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGTutorial*                           K2Node_CustomEvent_Tutorial_2;                     // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGTutorial*                           CallFunc_CreateTutorial_OutCreatedTutorial_9;      // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreateTutorial_ReturnValue_9;             // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F4D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x2F4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_F4F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetOwningPlayer_ReturnValue_12;           // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGTutorial*                           K2Node_CustomEvent_Tutorial_1;                     // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGTutorial*                           CallFunc_CreateTutorial_OutCreatedTutorial_10;     // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreateTutorial_ReturnValue_10;            // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F58[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x324(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_F65[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetOwningPlayer_ReturnValue_13;           // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGTutorial*                           K2Node_CustomEvent_Tutorial;                       // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGTutorial*                           CallFunc_CreateTutorial_OutCreatedTutorial_11;     // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreateTutorial_ReturnValue_11;            // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F6E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AGGPlayerController*                   CallFunc_GetOwningPlayer_ReturnValue_14;           // 0x358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGTutorial*                           CallFunc_CreateTutorial_OutCreatedTutorial_12;     // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CreateTutorial_ReturnValue_12;            // 0x368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F73[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x36C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F78[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x374(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


