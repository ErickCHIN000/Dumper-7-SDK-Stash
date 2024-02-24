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

// 0x8 (0x8 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetUserInterface
struct ABP_IcarusPlayerControllerSurvival_C_GetUserInterface_Params
{
public:
	class UUMG_UserInterface_Base_C*             UserInterface;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x380 (0x380 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CanRespawn
struct ABP_IcarusPlayerControllerSurvival_C_CanRespawn_Params
{
public:
	bool                                         CanRespawn;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_460C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProspectSubsystem*                    CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIcarusProspect                       CallFunc_GetActiveProspectData_ReturnValue;        // 0x18(0x2C8)(ConstParm)
	int32                                        CallFunc_GetStat_ReturnValue;                      // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x2E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x2E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4623[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProspectInfo                         CallFunc_GetActiveProspectInfo_ReturnValue;        // 0x2F0(0x90)(ConstParm)
};

// 0x374 (0x374 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ShouldShowChallengePopup
struct ABP_IcarusPlayerControllerSurvival_C_ShouldShowChallengePopup_Params
{
public:
	struct FItemData                             Item;                                              // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	int32                                        ProgressAmount;                                    // 0x1F0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldShow;                                        // 0x1F4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_472A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                DisplayThresholds;                                 // 0x1F8(0x10)(Edit, BlueprintVisible)
	float                                        PrevProgressPct;                                   // 0x208(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentProgressPct;                                // 0x20C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentProgressAmount;                             // 0x210(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLivingItemSlotState                  CallFunc_GetLivingItemActiveChallengeSlotState_ActiveQuestSlot; // 0x218(0x98)(None)
	bool                                         CallFunc_GetLivingItemActiveChallengeSlotState_ReturnValue; // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4745[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FChallenge                            CallFunc_GetChallengesStruct_Challenges;           // 0x2B8(0x70)(None)
	enum class EValid                            CallFunc_GetChallengesStruct_Paths;                // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x329(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4761[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x32C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Array_Get_Item;                           // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x334(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4771[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                K2Node_MakeArray_Array;                            // 0x340(0x10)(ReferenceParm)
	bool                                         CallFunc_GreaterEqual_FloatFloat_ReturnValue;      // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x351(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_477E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x354(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x35C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x360(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x368(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Contains_ReturnValue;                 // 0x36C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x36D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_47B1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetDynamicWidgetInventories
struct ABP_IcarusPlayerControllerSurvival_C_GetDynamicWidgetInventories_Params
{
public:
	TArray<class UInventory*>                    ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	TArray<class UInventory*>                    K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4875[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_IcarusLinkedActorPanel_C*         K2Node_DynamicCast_AsUMG_Icarus_Linked_Actor_Panel; // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4882[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            CallFunc_GetLinkedActorContainerInventory_ContainerInventory; // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent*                   CallFunc_GetLinkedActorInventoryComponent_InventoryComponent; // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UInventory*>                    K2Node_MakeArray_Array_1;                          // 0x48(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_48A6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UInventory*>                    CallFunc_Map_Values_Values;                        // 0x60(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x15B (0x15B - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CorpseUnstuck
struct ABP_IcarusPlayerControllerSurvival_C_CorpseUnstuck_Params
{
public:
	bool                                         DoMove;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CorpseAvailable;                                   // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A5E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MIN_CORPSE_DIST;                                   // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DropLocation;                                      // 0x8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MAX_CORPSE_DIST;                                   // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PlayerLocationNoZ;                                 // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HaveCorpse;                                        // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4A73[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A87[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x40(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x50(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4A93[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_Overflow_Bag_Gravestone_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0x80(0x10)(ReferenceParm)
	class ABP_Overflow_Bag_Gravestone_C*         CallFunc_Array_Get_Item;                           // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AAE[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xA0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X;                            // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y;                            // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z;                            // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xB8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Vector_Distance_ReturnValue;              // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0xCB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xCD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4AE4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_Gravestone_C*>              CallFunc_GetAllActorsOfClass_OutActors_1;          // 0xD0(0x10)(ReferenceParm)
	class ABP_Gravestone_C*                      CallFunc_Array_Get_Item_1;                         // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0xF0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B48[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x100(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X_1;                          // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y_1;                          // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z_1;                          // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B6D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x11C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x128(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_X_2;                          // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Y_2;                          // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakVector_Z_2;                          // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BB1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_MakeVector_ReturnValue_2;                 // 0x148(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Vector_Distance_ReturnValue_1;            // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue_1;         // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue_1;       // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x15A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.TryToggleThirdPerson
struct ABP_IcarusPlayerControllerSurvival_C_TryToggleThirdPerson_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsLocalController_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CE0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x18(0x8)(NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                CallFunc_GetFirstPersonMesh_ReturnValue;           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.DisplayDynamicWidget
struct ABP_IcarusPlayerControllerSurvival_C_DisplayDynamicWidget_Params
{
public:
	TSubclassOf<class UIcarusLinkedActorPanelBase> WidgetClass;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                LinkedActorForWidget;                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIcarusLinkedActorPanelBase*           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsUMG_Icarus_Linked_Actor_Panel; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D9D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_IcarusLinkedActorPanel_C*         CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x270 (0x270 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ActivateHotbarSlot
struct ABP_IcarusPlayerControllerSurvival_C_ActivateHotbarSlot_Params
{
public:
	int32                                        NewSelection;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bForce;                                            // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bQuickCraft;                                       // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bDelayedActivate;                                  // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsUnfocusing;                                      // 0x7(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        SlotToSelect;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4EEF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacterSurvival*        K2Node_DynamicCast_AsIcarus_Player_Character_Survival; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F08[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_4F0F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x38(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanFocusSlot_CanFocus;                    // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F21[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMoveInputIgnored_ReturnValue;           // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F42[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusCharacter*                      K2Node_DynamicCast_AsIcarus_Character;             // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F4C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1; // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAlive_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsShowingRadialMenu_ShowingRadialMenu;    // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F66[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_FocusSlot_FocusedItem;                    // 0x80(0x1F0)(ContainsInstancedReference)
};

// 0x128 (0x128 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ProcessChatMessage
struct ABP_IcarusPlayerControllerSurvival_C_ProcessChatMessage_Params
{
public:
	class AIcarusPlayerState*                    FromPlayer;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Message;                                           // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FIcarusPlayerChatMessage              ReturnValue;                                       // 0x18(0x40)(Parm, OutParm, ReturnParm)
	class ABP_IcarusPlayerState_C*               K2Node_DynamicCast_AsBP_Icarus_Player_State;       // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5053[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBPUniqueNetId                        CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId; // 0x68(0x20)(None)
	class FString                                CallFunc_UniqueNetIdToString_String;               // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FPlayerIdentityData                   CallFunc_GetPlayerIdentityData_PlayerIdentity;     // 0x98(0x28)(None)
	enum class EBlueprintAsyncResultSwitch       CallFunc_GetSteamFriendAvatar_Result;              // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5064[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            CallFunc_GetSteamFriendAvatar_ReturnValue;         // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_506C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlayerName_ReturnValue;                // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FIcarusPlayerChatMessage              K2Node_MakeStruct_IcarusPlayerChatMessage;         // 0xE8(0x40)(None)
};

// 0x8 (0x8 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetNetworkProxyComponent
struct ABP_IcarusPlayerControllerSurvival_C_GetNetworkProxyComponent_Params
{
public:
	class UNetworkProxyComponent*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetCriticalHitComponent
struct ABP_IcarusPlayerControllerSurvival_C_GetCriticalHitComponent_Params
{
public:
	class UIcarusCriticalHitComponent*           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetUserInterfaceInternal
struct ABP_IcarusPlayerControllerSurvival_C_GetUserInterfaceInternal_Params
{
public:
	class UUserInterfaceBase*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface;           // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.IsTryingToUnstuck
struct ABP_IcarusPlayerControllerSurvival_C_IsTryingToUnstuck_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.EndPhotoMode
struct ABP_IcarusPlayerControllerSurvival_C_EndPhotoMode_Params
{
public:
	bool                                         CallFunc_GetIsThirdPerson_ReturnValue;             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1C (0x1C - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.StartPhotoMode
struct ABP_IcarusPlayerControllerSurvival_C_StartPhotoMode_Params
{
public:
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5209[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASeatBase*                             CallFunc_GetAttachedToSeat_ReturnValue;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsThirdPerson_ReturnValue;             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1B (0x1B - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.IsThirdPersonToggleDisabled
struct ABP_IcarusPlayerControllerSurvival_C_IsThirdPersonToggleDisabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsThirdPersonToggleDisabled_ReturnValue;  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_52AE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacterSurvival*        K2Node_DynamicCast_AsIcarus_Player_Character_Survival; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAlive_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x29 (0x29 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnSessionFlagsUpdated
struct ABP_IcarusPlayerControllerSurvival_C_OnSessionFlagsUpdated_Params
{
public:
	class UFlagSubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFlagsMultiRowHandle                  CallFunc_FromSessionFlagsRowHandle_ReturnValue;    // 0x8(0x18)(HasGetValueTypeHash)
	class AIcarusPlayerState*                    CallFunc_GetIcarusPlayerState_ReturnValue;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasFlagPlayer_ReturnValue;                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.RemoveSoloRespawnModifier
struct ABP_IcarusPlayerControllerSurvival_C_RemoveSoloRespawnModifier_Params
{
public:
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveModifierState_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5F (0x5F - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.AddSoloRespawnModifier
struct ABP_IcarusPlayerControllerSurvival_C_AddSoloRespawnModifier_Params
{
public:
	class UFlagSubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerState*                    CallFunc_GetIcarusPlayerState_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFlagsMultiRowHandle                  CallFunc_FromSessionFlagsRowHandle_ReturnValue;    // 0x10(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_HasFlagPlayer_ReturnValue;                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5426[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FModifier                             K2Node_MakeStruct_Modifier;                        // 0x2C(0x20)(NoDestructor)
	uint8                                        Pad_542D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_AddModifierState_ReturnValue;             // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x42A (0x42A - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CreateOverflowBag
struct ABP_IcarusPlayerControllerSurvival_C_CreateOverflowBag_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            Inventory;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventoryComponent*                   InventoryComp;                                     // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemData>                     Items;                                             // 0x18(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55C9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponent*                   CallFunc_GetTrait_ReturnValue;                     // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55D4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x50(0x30)(IsPlainOldData, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Gravestone_C*                      K2Node_DynamicCast_AsBP_Gravestone;                // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGravestoneData                       CallFunc_GetGravestoneData_Data;                   // 0x98(0x90)(None)
	uint8                                        Pad_5608[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_1;              // 0x130(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_TransformTransform_ReturnValue; // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5613[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameModeBase*                         CallFunc_GetGameMode_ReturnValue;                  // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_561F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusGameModeSurvival*               K2Node_DynamicCast_AsIcarus_Game_Mode_Survival;    // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5627[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x190(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	struct FTransform                            Temp_wildcard_Variable;                            // 0x1C0(0x30)(IsPlainOldData, NoDestructor)
	struct FItemData                             CallFunc_GetItem_ReturnValue;                      // 0x1F0(0x1F0)(ContainsInstancedReference)
	enum class EDataValid                        CallFunc_ItemDataValid_Paths;                      // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x3E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_563E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryIDEnum>              CallFunc_GetInventoryIds_ReturnValue;              // 0x3E8(0x10)(ReferenceParm)
	struct FInventoryIDEnum                      CallFunc_Array_Get_Item;                           // 0x3F8(0x10)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x408(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_564E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            CallFunc_GetInventory_ReturnValue;                 // 0x410(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5660[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x41C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x420(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x424(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x429(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GatherMetaItems
struct ABP_IcarusPlayerControllerSurvival_C_GatherMetaItems_Params
{
public:
	TArray<struct FItemData>                     OutMetaItems;                                      // 0x0(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<struct FMetaResource>                 OutMetaResources;                                  // 0x10(0x10)(Parm, OutParm)
	TArray<struct FItemData>                     CallFunc_GetMetaItemsAndResources_MetaItems;       // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<struct FMetaResource>                 CallFunc_GetMetaItemsAndResources_MetaResources;   // 0x30(0x10)(ReferenceParm)
};

// 0xF5 (0xF5 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetRespawnPodLocations
struct ABP_IcarusPlayerControllerSurvival_C_GetRespawnPodLocations_Params
{
public:
	bool                                         FilterBiome;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5875[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_IcarusRespawnShipSpawn_C*>  AvailableSpawns;                                   // 0x8(0x10)(Parm, OutParm)
	TArray<class ABP_IcarusRespawnShipSpawn_C*>  OtherSpawns;                                       // 0x18(0x10)(Parm, OutParm)
	TArray<class ABP_IcarusRespawnShipSpawn_C*>  AllSpawns;                                         // 0x28(0x10)(Parm, OutParm)
	TArray<class ABP_IcarusRespawnShipSpawn_C*>  AllAvailable;                                      // 0x38(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ABP_IcarusRespawnShipSpawn_C*>  AvailableOther;                                    // 0x48(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ABP_IcarusRespawnShipSpawn_C*>  Available;                                         // 0x58(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FBiomesRowHandle                      PlayerBiome;                                       // 0x68(0x18)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_IcarusRespawnShipSpawn_C*>  CallFunc_GetAllActorsOfClass_OutActors;            // 0x90(0x10)(ReferenceParm)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusRespawnShipSpawn_C*          CallFunc_Array_Get_Item;                           // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xB0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBiomesRowHandle                      CallFunc_SampleBiomeAtLocation_ReturnValue;        // 0xC0(0x18)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0xE0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_FBiomesRowHandleFBiomesRowHandle_ReturnValue; // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_SampleLocationOutOfBounds_ReturnValue;    // 0xED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xEE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xEF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x16 (0x16 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetRespawnType
struct ABP_IcarusPlayerControllerSurvival_C_GetRespawnType_Params
{
public:
	enum class ERespawnType                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_598C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStat_ReturnValue;                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_GetValidValue_ReturnValue;                // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetRespawnDistance
struct ABP_IcarusPlayerControllerSurvival_C_GetRespawnDistance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Distance;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStat_ReturnValue;                      // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1130 (0x1130 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.SpawnGravestone
struct ABP_IcarusPlayerControllerSurvival_C_SpawnGravestone_Params
{
public:
	bool                                         DBNO;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B43[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseSnapshot                         DeathPose;                                         // 0x8(0x38)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UInventory*>                    CallFunc_GetAllInventories_ReturnValue;            // 0x50(0x10)(ReferenceParm, ContainsInstancedReference)
	class UInventory*                            CallFunc_Array_Get_Item;                           // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B6D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_RemoveItem_ReturnValue;                   // 0x70(0x1F0)(ContainsInstancedReference)
	struct FItemData                             K2Node_MakeStruct_ItemData;                        // 0x260(0x1F0)(ContainsInstancedReference)
	struct FInventorySlot                        CallFunc_Array_Get_Item_1;                         // 0x450(0x240)(ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x690(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x694(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemStaticData                       CallFunc_GetStaticItemData_StaticData;             // 0x698(0x4D0)(None)
	enum class EDataValid                        CallFunc_GetStaticItemData_Paths;                  // 0xB68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xB69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5BA2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0xB70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Gravestone_C*                      K2Node_DynamicCast_AsBP_Gravestone;                // 0xB78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5BB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0xB88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            CallFunc_GetGravestoneInventory_Inventory;         // 0xB90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_AutomaticallyPlaceItem_PlacedLocation;    // 0xB98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AutomaticallyPlaceItem_ReturnValue;       // 0xB9C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5BCF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetLastUpdateVelocity_ReturnValue;        // 0xBA0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BD4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIcarusItemConstructionParameters     K2Node_MakeStruct_IcarusItemConstructionParameters; // 0xBB0(0x28)(None)
	uint8                                        Pad_5BE0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0xBE0(0x30)(IsPlainOldData, NoDestructor)
	struct FIcarusItemSpawnParameters            K2Node_MakeStruct_IcarusItemSpawnParameters;       // 0xC10(0x90)(None)
	struct FItemData                             K2Node_MakeStruct_ItemData_1;                      // 0xCA0(0x1F0)(ContainsInstancedReference)
	bool                                         Temp_bool_Variable;                                // 0xE90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5BF5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTagQueriesRowHandle                  CallFunc_MakeLiteralTagQueries_ReturnValue;        // 0xE94(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BFC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             K2Node_Select_Default;                             // 0xEB0(0x1F0)(ContainsInstancedReference)
	struct FTagQueries                           CallFunc_GetTagQueriesStruct_TagQueries;           // 0x10A0(0x60)(None)
	enum class EValid                            CallFunc_GetTagQueriesStruct_Paths;                // 0x1100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C07[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusItem*                           CallFunc_SpawnItemActor_ReturnValue;               // 0x1108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x1110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C14[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Gravestone_C*                      K2Node_DynamicCast_AsBP_Gravestone_1;              // 0x1118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DoesContainerMatchTagQuery_ReturnValue;   // 0x1121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1122(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C32[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x1124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x1128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5C3D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x112C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OutOfBoundsTimeElapsed
struct ABP_IcarusPlayerControllerSurvival_C_OutOfBoundsTimeElapsed_Params
{
public:
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UOutOfBoundsSubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue;            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_1;   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerOutOfBounds_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5CEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerCharacterState*                 CallFunc_GetPlayerCharacterState_ReturnValue;      // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAlive_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsGodModeEnabled_ReturnValue;             // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5D00[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetStat_ReturnValue;                      // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_2;   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsOutOfBounds_ReturnValue;                // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x24 (0x24 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetOutOfBoundsRemainingTime
struct ABP_IcarusPlayerControllerSurvival_C_GetOutOfBoundsRemainingTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetServerWorldTimeSeconds_ReturnValue;    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue_1;        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOutOfBounds_ReturnValue;                // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5DA3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_FMax_ReturnValue;                         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.IsOutOfBounds
struct ABP_IcarusPlayerControllerSurvival_C_IsOutOfBounds_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7 (0x7 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnRep_OutOfBoundsTimestamp
struct ABP_IcarusPlayerControllerSurvival_C_OnRep_OutOfBoundsTimestamp_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOutOfBounds_ReturnValue;                // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsOutOfBounds_ReturnValue_1;              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x69 (0x69 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OutOfBoundsUpdated
struct ABP_IcarusPlayerControllerSurvival_C_OutOfBoundsUpdated_Params
{
public:
	class AIcarusPlayerCharacter*                Player;                                            // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OutOfBounds;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PerformBoundsCheck;                                // 0x9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SeatPreventsBoundsCheck;                           // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         PreviousState;                                     // 0xB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5E9C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesCurrentSeatPreventOutOfBoundsCheck_ReturnValue; // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5EA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5EAA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5EAF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x40(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5EB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsOutOfBounds_ReturnValue;                // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5EBD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetServerWorldTimeSeconds_ReturnValue;    // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_1;   // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetPlayerUID
struct ABP_IcarusPlayerControllerSurvival_C_GetPlayerUID_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	struct FBPUniqueNetId                        CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId; // 0x10(0x20)(None)
	class FString                                CallFunc_UniqueNetIdToString_String;               // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x52 (0x52 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.HasAvailableBed
struct ABP_IcarusPlayerControllerSurvival_C_HasAvailableBed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F5C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_BedBase_C*                         AvailableBed;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F68[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetPlayerUID_ReturnValue;                 // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class ABP_BedBase_C*>                 CallFunc_GetAllActorsOfClass_OutActors;            // 0x30(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F6F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_BedBase_C*                         CallFunc_Array_Get_Item;                           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasPlayerUID_ReturnValue;                 // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetUserID
struct ABP_IcarusPlayerControllerSurvival_C_GetUserID_Params
{
public:
	class FString                                UserID;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class AIcarusPlayerState*                    CallFunc_GetIcarusPlayerState_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetUserID_ReturnValue;                    // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x1AB (0x1AB - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetAvailableRespawnPod
struct ABP_IcarusPlayerControllerSurvival_C_GetAvailableRespawnPod_Params
{
public:
	class ABP_IcarusRespawnShipSpawn_C*          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewLocalVar_1;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6063[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        NewLocalVar_0;                                     // 0x10(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ABP_IcarusRespawnShipSpawn_C*>  AllSpawns;                                         // 0x20(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ABP_IcarusRespawnShipSpawn_C*>  OtherSpawns;                                       // 0x30(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class ABP_IcarusRespawnShipSpawn_C*>  BiomeSpawns;                                       // 0x40(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	struct FVector                               CheckLocation;                                     // 0x50(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RespawnDistance;                                   // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_IcarusRespawnShipSpawn_C*>  Available;                                         // 0x60(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                        Temp_int_Variable;                                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6074[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Temp_wildcard_Variable;                            // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6077[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_SortActorsByDistanceFromOrigin_ReturnValue; // 0x90(0x10)(ReferenceParm)
	class AActor*                                CallFunc_Array_Get_Item;                           // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6081[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusRespawnShipSpawn_C*          K2Node_DynamicCast_AsBP_Icarus_Respawn_Ship_Spawn; // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6086[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_SortActorsByDistanceFromOrigin_ReturnValue_1; // 0xC0(0x10)(ReferenceParm)
	TArray<class ABP_IcarusRespawnShipSpawn_C*>  CallFunc_GetRespawnPodLocations_AvailableSpawns;   // 0xD0(0x10)(ReferenceParm)
	TArray<class ABP_IcarusRespawnShipSpawn_C*>  CallFunc_GetRespawnPodLocations_OtherSpawns;       // 0xE0(0x10)(ReferenceParm)
	TArray<class ABP_IcarusRespawnShipSpawn_C*>  CallFunc_GetRespawnPodLocations_AllSpawns;         // 0xF0(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6099[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item_1;                         // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_609E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusRespawnShipSpawn_C*          K2Node_DynamicCast_AsBP_Icarus_Respawn_Ship_Spawn_1; // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_SortActorsByDistanceFromOrigin_ReturnValue_2; // 0x128(0x10)(ReferenceParm)
	float                                        CallFunc_GetRespawnDistance_ReturnValue;           // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue_1;            // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_Array_Get_Item_2;                         // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_2;         // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60B3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusRespawnShipSpawn_C*          K2Node_DynamicCast_AsBP_Icarus_Respawn_Ship_Spawn_2; // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_60BA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class ABP_IcarusRespawnShipSpawn_C*>  CallFunc_GetRespawnPodLocations_AvailableSpawns_1; // 0x160(0x10)(ReferenceParm)
	TArray<class ABP_IcarusRespawnShipSpawn_C*>  CallFunc_GetRespawnPodLocations_OtherSpawns_1;     // 0x170(0x10)(ReferenceParm)
	TArray<class ABP_IcarusRespawnShipSpawn_C*>  CallFunc_GetRespawnPodLocations_AllSpawns_1;       // 0x180(0x10)(ReferenceParm)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusRespawnShipSpawn_C*          CallFunc_Array_Get_Item_3;                         // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_RandomInteger_ReturnValue;                // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ERespawnType                      CallFunc_GetRespawnType_ReturnValue;               // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x88 (0x88 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnPlayerRespawn
struct ABP_IcarusPlayerControllerSurvival_C_OnPlayerRespawn_Params
{
public:
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_1;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_2;   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UModifierStateComponent*>       CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_3;   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_617A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_617F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_618E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6195[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;   // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UModifierStateComponent*               CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveModifierState_ReturnValue;          // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAlive_ReturnValue;                      // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_619D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1; // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerSubsystem*                      CallFunc_GetWorldSubsystem_ReturnValue;            // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x35 (0x35 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.EmptyHands
struct ABP_IcarusPlayerControllerSurvival_C_EmptyHands_Params
{
public:
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanFocusSlot_CanFocus;                    // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61FC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAlive_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsShowingRadialMenu_ShowingRadialMenu;    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_620E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusCharacter*                      K2Node_DynamicCast_AsIcarus_Character;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMoveInputIgnored_ReturnValue;           // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x221 (0x221 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.UpdateHotbar
struct ABP_IcarusPlayerControllerSurvival_C_UpdateHotbar_Params
{
public:
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot; // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValidity                     CallFunc_GetFocusedItemInventoryAndSlot_Validity;  // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FInventoryIDEnum                      CallFunc_GetInventoryID_ReturnValue;               // 0x18(0x10)(HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_EnumEnum_ReturnValue;          // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_629E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_FocusSlot_FocusedItem;                    // 0x30(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x339 (0x339 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.QuickCraft
struct ABP_IcarusPlayerControllerSurvival_C_QuickCraft_Params
{
public:
	struct FProcessorRecipesRowHandle            Recipe;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FProcessorRecipe                      CallFunc_GetProcessorRecipesStruct_ProcessorRecipes; // 0x20(0x2E8)(ContainsInstancedReference)
	enum class EValid                            CallFunc_GetProcessorRecipesStruct_Paths;          // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x309(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x30B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UInventory*>                    K2Node_MakeArray_Array;                            // 0x310(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	struct FRecipeSetsRowHandle                  CallFunc_MakeLiteralRecipeSets_ReturnValue;        // 0x320(0x18)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2E (0x2E - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.External_CanPerformInputAction
struct ABP_IcarusPlayerControllerSurvival_C_External_CanPerformInputAction_Params
{
public:
	bool                                         bBlockedByUI;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bIgnoreAnimLock;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         ReturnValue;                                       // 0x2(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6352[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;   // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMoveInputIgnored_ReturnValue;           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAlive_ReturnValue;                      // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_635E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusCharacter*                      K2Node_DynamicCast_AsIcarus_Character;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsShowingRadialMenu_ShowingRadialMenu;    // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsShowingStaticWidget_Menu_Open;          // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetCheatOverlay
struct ABP_IcarusPlayerControllerSurvival_C_GetCheatOverlay_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCheatOverlayBase*                     ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CheatOverlay_C*                   CallFunc_GetCheatOverlay_Overlay;                  // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x97 (0x97 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CanFocusSlot
struct ABP_IcarusPlayerControllerSurvival_C_CanFocusSlot_Params
{
public:
	int32                                        SlotToFocus;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanFocus;                                          // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_63D0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTagQueriesRowHandle                  CallFunc_MakeLiteralTagQueries_ReturnValue;        // 0x8(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FTagQueries                           CallFunc_GetTagQueriesStruct_TagQueries;           // 0x20(0x60)(None)
	enum class EValid                            CallFunc_GetTagQueriesStruct_Paths;                // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_63D6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSeated_ReturnValue;                     // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DoesContainerMatchTagQuery_ReturnValue;   // 0x93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x96(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ToggleUIVisibility
struct ABP_IcarusPlayerControllerSurvival_C_ToggleUIVisibility_Params
{
public:
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetIsThirdPerson
struct ABP_IcarusPlayerControllerSurvival_C_GetIsThirdPerson_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsThirdPerson_ReturnValue;             // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CriticalHitActive_Active;                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_63FA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAlive_ReturnValue;                      // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CriticalHitActive_Active_1;               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetIsThirdPerson_ReturnValue_1;           // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x409 (0x409 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetItem
struct ABP_IcarusPlayerControllerSurvival_C_GetItem_Params
{
public:
	int32                                        InventoryID;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InventorySlot;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             Item;                                              // 0x8(0x1F0)(Parm, OutParm, ContainsInstancedReference)
	struct FInventoryIDEnum                      CallFunc_IntToStruct_ReturnValue;                  // 0x1F8(0x10)(HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;   // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            CallFunc_GetInventory_ReturnValue;                 // 0x210(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             CallFunc_GetItem_ReturnValue;                      // 0x218(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x208 (0x208 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Calculate Quick Item Move
struct ABP_IcarusPlayerControllerSurvival_C_Calculate_Quick_Item_Move_Params
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Slot;                                              // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6453[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   PlayerCharacter;                                   // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             ItemToMove;                                        // 0x18(0x1F0)(Edit, BlueprintVisible, ContainsInstancedReference)
};

// 0x101 (0x101 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnPlayerRevive
struct ABP_IcarusPlayerControllerSurvival_C_OnPlayerRevive_Params
{
public:
	float                                        HealthRestoredPercent;                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PrevFood;                                          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PrevWater;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PrevOxygen;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_64C2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerCharacterState*                 K2Node_DynamicCast_AsPlayer_Character_State;       // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_64C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetFood_ReturnValue;                      // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetWater_ReturnValue;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetOxygen_ReturnValue;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1; // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UModifierStateComponent*>       CallFunc_K2_GetComponentsByClass_ReturnValue;      // 0x48(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_GetMaxHealth_ReturnValue;                 // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_64CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UModifierStateComponent*               CallFunc_Array_Get_Item;                           // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerCharacterState*                 K2Node_DynamicCast_AsPlayer_Character_State_1;     // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_64D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMaxWater_ReturnValue;                  // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMaxFood_ReturnValue;                   // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue_1;                        // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_2;                     // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetMaxOxygen_ReturnValue;                 // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue_2;                        // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue_2;          // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_3;                     // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_1;   // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue_3;                        // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveModifierState_ReturnValue;          // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_64E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_2;   // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_64E2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival; // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_64E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_64EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_2; // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_3; // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAlive_ReturnValue;                      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.GetIcarusPlayerCharacterBP
struct ABP_IcarusPlayerControllerSurvival_C_GetIcarusPlayerCharacterBP_Params
{
public:
	class ABP_IcarusPlayerCharacterSurvival_C*   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xAD (0xAD - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.DevTeleport
struct ABP_IcarusPlayerControllerSurvival_C_DevTeleport_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation;                                          // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_SetActorRotation_ReturnValue;          // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6534[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x24(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x110 (0x110 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnPlayerDeath
struct ABP_IcarusPlayerControllerSurvival_C_OnPlayerDeath_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6585[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AIcarusItem*>                   AttachedProjectiles;                               // 0x8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                         WasAlreadyDead;                                    // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6586[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetTimeSeconds_ReturnValue;               // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_658A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalPlayerController_ReturnValue;      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_658E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PhotoCamera_C*                     K2Node_DynamicCast_AsBP_Photo_Camera;              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6590[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1; // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6592[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusActor*                          K2Node_DynamicCast_AsIcarus_Actor;                 // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6594[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerControllerSurvival*       K2Node_DynamicCast_AsIcarus_Player_Controller_Survival; // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6595[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_1;   // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6597[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerObserverSubsystem*              CallFunc_GetWorldSubsystem_ReturnValue;            // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAvailableBed_ReturnValue;              // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_659A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_BedBase_C*                         CallFunc_HasAvailableBed_AvailableBed;             // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetUserID_UserID;                         // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_2; // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_2;                   // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_3; // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_4; // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSeated_ReturnValue;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAlive_ReturnValue;                      // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65AA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASeatBase*                             CallFunc_GetAttachedToSeat_ReturnValue;            // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LeaveSeat_ReturnValue;                    // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65AD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCreatureSubsystem*                    CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_2;   // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerSubsystem*                      CallFunc_GetWorldSubsystem_ReturnValue_2;          // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_F10_K2Node_InputKeyEvent_0
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_F10_K2Node_InputKeyEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Interact_K2Node_InputActionEvent_32
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Interact_K2Node_InputActionEvent_32_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Interact_K2Node_InputActionEvent_31
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Interact_K2Node_InputActionEvent_31_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Fire_K2Node_InputActionEvent_30
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Fire_K2Node_InputActionEvent_30_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_AltFire_K2Node_InputActionEvent_29
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_AltFire_K2Node_InputActionEvent_29_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar1_K2Node_InputActionEvent_28
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar1_K2Node_InputActionEvent_28_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar0_K2Node_InputActionEvent_27
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar0_K2Node_InputActionEvent_27_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar2_K2Node_InputActionEvent_26
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar2_K2Node_InputActionEvent_26_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar3_K2Node_InputActionEvent_25
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar3_K2Node_InputActionEvent_25_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar4_K2Node_InputActionEvent_24
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar4_K2Node_InputActionEvent_24_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar5_K2Node_InputActionEvent_23
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar5_K2Node_InputActionEvent_23_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar6_K2Node_InputActionEvent_22
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar6_K2Node_InputActionEvent_22_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar7_K2Node_InputActionEvent_21
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar7_K2Node_InputActionEvent_21_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar8_K2Node_InputActionEvent_20
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar8_K2Node_InputActionEvent_20_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hotbar9_K2Node_InputActionEvent_19
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hotbar9_K2Node_InputActionEvent_19_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_HideUI_K2Node_InputActionEvent_18
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_HideUI_K2Node_InputActionEvent_18_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Screenshot_K2Node_InputActionEvent_17
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Screenshot_K2Node_InputActionEvent_17_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Inventory_K2Node_InputActionEvent_16
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Inventory_K2Node_InputActionEvent_16_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Crafting_K2Node_InputActionEvent_15
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Crafting_K2Node_InputActionEvent_15_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Tech_K2Node_InputActionEvent_14
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Tech_K2Node_InputActionEvent_14_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Map_K2Node_InputActionEvent_13
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Map_K2Node_InputActionEvent_13_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Escape_K2Node_InputActionEvent_12
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Escape_K2Node_InputActionEvent_12_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_HotbarBack_K2Node_InputActionEvent_11
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_HotbarBack_K2Node_InputActionEvent_11_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Hands_K2Node_InputActionEvent_10
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Hands_K2Node_InputActionEvent_10_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_ToggleMenus_K2Node_InputActionEvent_9
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_ToggleMenus_K2Node_InputActionEvent_9_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_HotbarForward_K2Node_InputActionEvent_8
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_HotbarForward_K2Node_InputActionEvent_8_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_HotbarBackSlot_K2Node_InputActionEvent_7
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_HotbarBackSlot_K2Node_InputActionEvent_7_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_TextChat_K2Node_InputActionEvent_6
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_TextChat_K2Node_InputActionEvent_6_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_HideQuestUI_K2Node_InputActionEvent_5
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_HideQuestUI_K2Node_InputActionEvent_5_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_OpenBestiary_K2Node_InputActionEvent_4
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_OpenBestiary_K2Node_InputActionEvent_4_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_TogglePhotoMode_K2Node_InputActionEvent_3
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_TogglePhotoMode_K2Node_InputActionEvent_3_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_2
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_2_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_Escape_K2Node_InputActionEvent_1
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_Escape_K2Node_InputActionEvent_1_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpActEvt_LootAll_K2Node_InputActionEvent_0
struct ABP_IcarusPlayerControllerSurvival_C_InpActEvt_LootAll_K2Node_InputActionEvent_0_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CheckPlayerViewDelta
struct ABP_IcarusPlayerControllerSurvival_C_CheckPlayerViewDelta_Params
{
public:
	bool                                         Init;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_0
struct ABP_IcarusPlayerControllerSurvival_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_0_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.InpAxisEvt_LookRight_K2Node_InputAxisEvent_1
struct ABP_IcarusPlayerControllerSurvival_C_InpAxisEvt_LookRight_K2Node_InputAxisEvent_1_Params
{
public:
	float                                        AxisValue;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Server_AttemptRespawn
struct ABP_IcarusPlayerControllerSurvival_C_Server_AttemptRespawn_Params
{
public:
	class ABP_Gravestone_C*                      Gravestone;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Respawn
struct ABP_IcarusPlayerControllerSurvival_C_Respawn_Params
{
public:
	class ABP_Gravestone_C*                      Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.BP_ServerAttemptRevive_Implementation
struct ABP_IcarusPlayerControllerSurvival_C_BP_ServerAttemptRevive_Implementation_Params
{
public:
	class AGravestoneBase*                       Gravestone;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.AddItemToInventory
struct ABP_IcarusPlayerControllerSurvival_C_AddItemToInventory_Params
{
public:
	struct FItemTemplateRowHandle                ItemTemplate;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnServer_SetFocusedSlot
struct ABP_IcarusPlayerControllerSurvival_C_OnServer_SetFocusedSlot_Params
{
public:
	int32                                        NewFocused;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Force;                                             // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1F4 (0x1F4 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnGainedItem
struct ABP_IcarusPlayerControllerSurvival_C_OnGainedItem_Params
{
public:
	struct FItemData                             Item;                                              // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	int32                                        TotalCount;                                        // 0x1F0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F4 (0x1F4 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnClient_ItemGained
struct ABP_IcarusPlayerControllerSurvival_C_OnClient_ItemGained_Params
{
public:
	struct FItemData                             Item;                                              // 0x0(0x1F0)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	int32                                        Count;                                             // 0x1F0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Server_SetAmmo
struct ABP_IcarusPlayerControllerSurvival_C_Server_SetAmmo_Params
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Slot;                                              // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Unload;                                            // 0xC(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Server_SetBuildingVariation
struct ABP_IcarusPlayerControllerSurvival_C_Server_SetBuildingVariation_Params
{
public:
	int32                                        Variation;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnClient_UpdateHotBarSelection
struct ABP_IcarusPlayerControllerSurvival_C_OnClient_UpdateHotBarSelection_Params
{
public:
	int32                                        NewSelection;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Force;                                             // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC (0xC - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnHotbarItemAdded
struct ABP_IcarusPlayerControllerSurvival_C_OnHotbarItemAdded_Params
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Location;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OwningClient_ForceSlotHighlight
struct ABP_IcarusPlayerControllerSurvival_C_OwningClient_ForceSlotHighlight_Params
{
public:
	int32                                        NewSlot;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.StartQuickCraft
struct ABP_IcarusPlayerControllerSurvival_C_StartQuickCraft_Params
{
public:
	struct FProcessorRecipesRowHandle            Recipe;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.CheckQuickCraft
struct ABP_IcarusPlayerControllerSurvival_C_CheckQuickCraft_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.WantsPlayerDeadUI
struct ABP_IcarusPlayerControllerSurvival_C_WantsPlayerDeadUI_Params
{
public:
	bool                                         IsDead;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.BP_ClientOpenContainer
struct ABP_IcarusPlayerControllerSurvival_C_BP_ClientOpenContainer_Params
{
public:
	class UInventory*                            Inventory;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShowStoreAll;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bShowTakeAll;                                      // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ReceiveTick
struct ABP_IcarusPlayerControllerSurvival_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnServer_GiveFocusToObject
struct ABP_IcarusPlayerControllerSurvival_C_OnServer_GiveFocusToObject_Params
{
public:
	class AActor*                                Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnDevTeleport
struct ABP_IcarusPlayerControllerSurvival_C_OnDevTeleport_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation;                                          // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ServerDevTeleport
struct ABP_IcarusPlayerControllerSurvival_C_ServerDevTeleport_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation;                                          // 0xC(0xC)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.Client_Build
struct ABP_IcarusPlayerControllerSurvival_C_Client_Build_Params
{
public:
	class AIcarusRocket*                         Rocket;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.SetUIVisibility
struct ABP_IcarusPlayerControllerSurvival_C_SetUIVisibility_Params
{
public:
	bool                                         bHide;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bHideDebug;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.EQSFinished
struct ABP_IcarusPlayerControllerSurvival_C_EQSFinished_Params
{
public:
	class UEnvQueryInstanceBlueprintWrapper*     QueryInstance;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEnvQueryStatus                   QueryStatus;                                       // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F0 (0x1F0 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OnItemBounced_Event
struct ABP_IcarusPlayerControllerSurvival_C_OnItemBounced_Event_Params
{
public:
	struct FItemData                             ItemData;                                          // 0x0(0x1F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x11 (0x11 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ServerPushClientDynamicWidget
struct ABP_IcarusPlayerControllerSurvival_C_ServerPushClientDynamicWidget_Params
{
public:
	TSubclassOf<class UIcarusLinkedActorPanelBase> WidgetClass;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                LinkedActor;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFocusCameraOnActor;                               // 0x10(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.TriggerLoadShip
struct ABP_IcarusPlayerControllerSurvival_C_TriggerLoadShip_Params
{
public:
	class AIcarusRocket*                         Rocket;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C (0x1C - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.NotifyExoticsBanked
struct ABP_IcarusPlayerControllerSurvival_C_NotifyExoticsBanked_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMetaCurrencyRowHandle                Type;                                              // 0x4(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.NotifyQuestCompleted
struct ABP_IcarusPlayerControllerSurvival_C_NotifyQuestCompleted_Params
{
public:
	class AQuest*                                Quest;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFactionMissionsRowHandle             MissionRowHandle;                                  // 0x8(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsCurrentQuest;                                   // 0x20(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_68CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMetaResource>                 ReceivedResources;                                 // 0x28(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.NotifyItemsReturned
struct ABP_IcarusPlayerControllerSurvival_C_NotifyItemsReturned_Params
{
public:
	TArray<struct FItemData>                     Items;                                             // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.NotifyDynamicQuestCompleted
struct ABP_IcarusPlayerControllerSurvival_C_NotifyDynamicQuestCompleted_Params
{
public:
	int32                                        NumCredits;                                        // 0x0(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumExperience;                                     // 0x4(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F0 (0x1F0 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.OpenBagWidgetUI
struct ABP_IcarusPlayerControllerSurvival_C_OpenBagWidgetUI_Params
{
public:
	struct FItemData                             SourceItem;                                        // 0x0(0x1F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x1F0 (0x1F0 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.HandleLivingItemChallengeCompleted
struct ABP_IcarusPlayerControllerSurvival_C_HandleLivingItemChallengeCompleted_Params
{
public:
	struct FItemData                             ItemData;                                          // 0x0(0x1F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x1F4 (0x1F4 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.HandleLivingItemChallengeProgressUpdated
struct ABP_IcarusPlayerControllerSurvival_C_HandleLivingItemChallengeProgressUpdated_Params
{
public:
	struct FItemData                             ItemData;                                          // 0x0(0x1F0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	int32                                        ProgressAmount;                                    // 0x1F0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3558 (0x3558 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ExecuteUbergraph_BP_IcarusPlayerControllerSurvival
struct ABP_IcarusPlayerControllerSurvival_C_ExecuteUbergraph_BP_IcarusPlayerControllerSurvival_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldRotateCameraOnDeployableInteract_ReturnValue; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6AF4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConnectedPlayer                      CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer; // 0x8(0x38)(None)
	bool                                         CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue; // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6AF6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_7;                     // 0x48(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_6;                     // 0x60(0x18)(HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue;   // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EValid                            CallFunc_GetTrait_Paths;                           // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AF9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActionableComponent*                  CallFunc_GetTrait_ReturnValue;                     // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x93(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6AFC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_8;                     // 0x98(0x18)(HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_1; // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UConnectedPlayers*                     CallFunc_GetConnectedPlayers_ReturnValue;          // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory; // 0xC0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot; // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValidity                     CallFunc_GetFocusedItemInventoryAndSlot_Validity;  // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xCD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0xCE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6AFF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryIDEnum                      CallFunc_GetInventoryID_ReturnValue;               // 0xD0(0x10)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_9;                     // 0xE0(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_EnumEnum_ReturnValue;          // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B01[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_2; // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemInventory_1; // 0x108(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetFocusedItemInventoryAndSlot_FocusedItemSlot_1; // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDataValidity                     CallFunc_GetFocusedItemInventoryAndSlot_Validity_1; // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B03[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPlayerSubsystem*                      CallFunc_GetWorldSubsystem_ReturnValue;            // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B06[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryIDEnum                      CallFunc_GetInventoryID_ReturnValue_1;             // 0x128(0x10)(HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_3; // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_EnumEnum_ReturnValue_1;        // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAlive_ReturnValue;                      // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B07[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMoveInputIgnored_ReturnValue;           // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B09[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusCharacter*                      K2Node_DynamicCast_AsIcarus_Character;             // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue_2;                   // 0x162(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x163(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B0C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_5;                     // 0x168(0x18)(HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_4; // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B0D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAlive_ReturnValue_1;                    // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMoveInputIgnored_ReturnValue_1;         // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x19A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x19B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B10[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusCharacter*                      K2Node_DynamicCast_AsIcarus_Character_1;           // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B11[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_5; // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x1BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x1BB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue_3;                   // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B12[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_6; // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_4;                   // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B14[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_10;                    // 0x1D0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_11;                    // 0x1E8(0x18)(HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_7; // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetBestSafeTeleportLocationForPlayer_OutLocation; // 0x208(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x214(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B18[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult;       // 0x218(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue;          // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B19[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue;     // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAlive_ReturnValue_2;                    // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Init;                           // 0x2B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B1B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTagQueriesRowHandle                  CallFunc_MakeLiteralTagQueries_ReturnValue;        // 0x2C0(0x18)(NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetCameraLocation_ReturnValue;            // 0x2D8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B1D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTagQueries                           CallFunc_GetTagQueriesStruct_TagQueries;           // 0x2E8(0x60)(None)
	enum class EValid                            CallFunc_GetTagQueriesStruct_Paths;                // 0x348(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_3;                    // 0x349(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B1F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue_1;     // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetCameraLocation_ReturnValue_1;          // 0x358(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Vector_Distance_ReturnValue;              // 0x364(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue_2;     // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x370(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetCameraLocation_ReturnValue_2;          // 0x380(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B22[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x390(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_VectorToString_ReturnValue;          // 0x3A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x3B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B29[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x3C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x3D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPackagedForDistribution_ReturnValue;    // 0x3E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B2C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Conv_VectorToString_ReturnValue_1;        // 0x3F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x400(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class UUMG_FLODDebugOverlay_C*>       CallFunc_GetAllWidgetsOfClass_FoundWidgets;        // 0x410(0x10)(ReferenceParm, ContainsInstancedReference)
	class UUMG_FLODDebugOverlay_C*               CallFunc_Array_Get_Item;                           // 0x420(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B2E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        K2Node_InputAxisEvent_AxisValue_1;                 // 0x42C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_InputAxisEvent_AxisValue;                   // 0x430(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B30[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UConnectedPlayers*                     CallFunc_GetConnectedPlayers_ReturnValue_1;        // 0x438(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x441(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B32[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConnectedPlayer                      CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer_1; // 0x448(0x38)(None)
	bool                                         CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue_1; // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B33[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x484(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue_1;                  // 0x488(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B35[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x48C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6B36[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_12;                    // 0x4A0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_13;                    // 0x4B8(0x18)(HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_1;   // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Gravestone_C*                      K2Node_CustomEvent_Gravestone;                     // 0x4D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAlive_ReturnValue_3;                    // 0x4E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B3A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_8; // 0x4E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Gravestone_C*                      K2Node_CustomEvent_Target;                         // 0x4F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetTrait_Paths_1;                         // 0x4F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B3C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActionableComponent*                  CallFunc_GetTrait_ReturnValue_1;                   // 0x500(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_4;                    // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B3E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_14;                    // 0x510(0x18)(HasGetValueTypeHash)
	class ABP_IcarusRespawnShipSpawn_C*          CallFunc_GetAvailableRespawnPod_ReturnValue;       // 0x528(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FBPUniqueNetId                        CallFunc_GetUniqueNetIDFromPlayerState_UniqueNetId; // 0x530(0x20)(None)
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x550(0x30)(ConstParm, IsPlainOldData, NoDestructor)
	class FString                                CallFunc_UniqueNetIdToString_String;               // 0x580(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x590(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_DropShip_RespawnPod_C*             CallFunc_FinishSpawningActor_ReturnValue;          // 0x598(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x5A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B40[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_9; // 0x5A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget; // 0x5B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_15;                    // 0x5B8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_16;                    // 0x5D0(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_HasAvailableBed_ReturnValue;              // 0x5E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B42[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_BedBase_C*                         CallFunc_HasAvailableBed_AvailableBed;             // 0x5F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_10; // 0x5F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_FindExitSpot_ReturnValue;                 // 0x600(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult_1;     // 0x60C(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue_1;        // 0x694(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B47[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_11; // 0x698(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_OnProspectNotification_DynamicMissionComplete_C* CallFunc_Create_ReturnValue;                       // 0x6A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x6A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAlive_ReturnValue_4;                    // 0x6A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B4B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget_1; // 0x6B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAvailableBed_ReturnValue_1;            // 0x6B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B4E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_BedBase_C*                         CallFunc_HasAvailableBed_AvailableBed_1;           // 0x6C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_5;                   // 0x6C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsSheltered_ReturnValue;                  // 0x6C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B4F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Gravestone_C*                      K2Node_DynamicCast_AsBP_Gravestone;                // 0x6D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x6D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B50[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Gravestone_C*                      K2Node_DynamicCast_AsBP_Gravestone_1;              // 0x6E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x6E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B51[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerCharacterID                    CallFunc_GetPlayerCharacterID_ReturnValue;         // 0x6F0(0x18)(ConstParm, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_2;   // 0x708(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIcarusStatContainer*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x710(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FModifier                             K2Node_MakeStruct_Modifier;                        // 0x718(0x20)(NoDestructor)
	int32                                        CallFunc_GetStat_ReturnValue;                      // 0x738(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStat_ReturnValue_1;                    // 0x73C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x740(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x744(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B57[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x748(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x74C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B58[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key;                       // 0x750(0x18)(HasGetValueTypeHash)
	float                                        CallFunc_SelectFloat_ReturnValue;                  // 0x768(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B5A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_OnProspectNotification_ItemsReturned_C* CallFunc_Create_ReturnValue_1;                     // 0x770(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue_2;                  // 0x778(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_3;                  // 0x779(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x77A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x77B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x77C(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_AddModifierState_ReturnValue;             // 0x78C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_1;                     // 0x790(0x18)(HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_3;   // 0x7A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_2;                     // 0x7B0(0x18)(HasGetValueTypeHash)
	class AGravestoneBase*                       K2Node_Event_Gravestone;                           // 0x7C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Gravestone_C*                      K2Node_DynamicCast_AsBP_Gravestone_2;              // 0x7D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x7D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConnectedPlayer                      CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_OutConnectedPlayer; // 0x7E0(0x38)(None)
	bool                                         CallFunc_FindInitialisedConnectedPlayerByPlayerCharacterID_ReturnValue; // 0x818(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanRespawn_CanRespawn;                    // 0x819(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x81A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanRespawn_CanRespawn_1;                  // 0x81B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B61[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_4;   // 0x820(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x828(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B62[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_5;   // 0x830(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_OnProspectNotification_MissionComplete_C* CallFunc_Create_ReturnValue_2;                     // 0x838(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetStat_ReturnValue_2;                    // 0x840(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B63[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_OnProspectNotification_ExoticsBanked_C* CallFunc_Create_ReturnValue_3;                     // 0x848(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x850(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x851(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x852(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsShowingStaticWidget_Menu_Open;          // 0x853(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B64[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_17;                    // 0x858(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_18;                    // 0x870(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_19;                    // 0x888(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_20;                    // 0x8A0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_21;                    // 0x8B8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_22;                    // 0x8D0(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_23;                    // 0x8E8(0x18)(HasGetValueTypeHash)
	struct FItemTemplateRowHandle                K2Node_CustomEvent_ItemTemplate;                   // 0x900(0x18)(NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_12; // 0x918(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             CallFunc_GetItemTemplateStruct_ItemTemplate;       // 0x920(0x1F0)(ContainsInstancedReference)
	enum class EValid                            CallFunc_GetItemTemplateStruct_Paths;              // 0xB10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_5;                    // 0xB11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B66[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AutomaticallyPlaceItem_PlacedLocation;    // 0xB14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AutomaticallyPlaceItem_ReturnValue;       // 0xB18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DropItem_ReturnValue;                     // 0xB19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B68[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_NewFocused;                     // 0xB1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Force_1;                        // 0xB20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B69[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_AutomaticallyPlaceItem_PlacedLocation_1;  // 0xB24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AutomaticallyPlaceItem_ReturnValue_1;     // 0xB28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B6A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_13; // 0xB30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0xB38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsLocalPlayerController_ReturnValue;      // 0xB39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B6C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_14; // 0xB40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_2;                 // 0xB48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_6;                // 0xB50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMoveInputIgnored_ReturnValue_2;         // 0xB51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B6D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusCharacter*                      K2Node_DynamicCast_AsIcarus_Character_2;           // 0xB58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0xB60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_7;                // 0xB61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0xB62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B6F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_24;                    // 0xB68(0x18)(HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0xB80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_25;                    // 0xB90(0x18)(HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_15; // 0xBA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xBB0(0x10)(ZeroConstructor, NoDestructor)
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue;                  // 0xBC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsAlive_ReturnValue_5;                    // 0xBC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_6;                  // 0xBC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0xBCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B73[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_26;                    // 0xBD0(0x18)(HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_3;                 // 0xBE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival; // 0xBF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0xBF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B78[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_27;                    // 0xC00(0x18)(HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xC18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B7B[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0xC30(0x30)(IsPlainOldData, NoDestructor)
	struct FItemData                             K2Node_CustomEvent_Item_1;                         // 0xC60(0x1F0)(ContainsInstancedReference)
	int32                                        K2Node_CustomEvent_TotalCount;                     // 0xE50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B7C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             K2Node_CustomEvent_Item;                           // 0xE58(0x1F0)(ContainsInstancedReference)
	int32                                        K2Node_CustomEvent_Count;                          // 0x1048(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B7F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            K2Node_CustomEvent_Inventory_1;                    // 0x1050(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_slot;                           // 0x1058(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Unload;                         // 0x105C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B83[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemStaticData                       CallFunc_GetItemsStaticStruct_ItemsStatic;         // 0x1060(0x4D0)(None)
	enum class EValid                            CallFunc_GetItemsStaticStruct_Paths;               // 0x1530(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_6;                    // 0x1531(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x1532(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B84[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryIDEnum                      CallFunc_GetInventoryID_ReturnValue_2;             // 0x1538(0x10)(HasGetValueTypeHash)
	class FName                                  CallFunc_BreakInventoryIDEnum_Name;                // 0x1548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakInventoryIDEnum_Index;               // 0x1550(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B87[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_28;                    // 0x1558(0x18)(HasGetValueTypeHash)
	class UPlayerSubsystem*                      CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0x1570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x1578(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0x1588(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B89[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_Variation;                      // 0x158C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails;        // 0x1590(0x98)(ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0x1628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B8B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x162C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x1638(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_NewSelection;                   // 0x1644(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Force;                          // 0x1648(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B8D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult_2;     // 0x164C(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue_2;        // 0x16D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B8E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_4;                 // 0x16D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_1; // 0x16E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x16E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_External_CanPerformInputAction_ReturnValue; // 0x16E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B8F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            K2Node_CustomEvent_Inventory;                      // 0x16F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Location_2;                     // 0x16F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_GetItem_ReturnValue;                      // 0x1700(0x1F0)(ContainsInstancedReference)
	struct FItemStaticData                       CallFunc_GetStaticItemData_StaticData;             // 0x18F0(0x4D0)(None)
	enum class EDataValid                        CallFunc_GetStaticItemData_Paths;                  // 0x1DC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B92[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_CustomEvent_NewSlot;                        // 0x1DC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_7;                    // 0x1DC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B93[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             CallFunc_FocusSlot_FocusedItem;                    // 0x1DD0(0x1F0)(ContainsInstancedReference)
	bool                                         CallFunc_DoesContainerMatchTagQuery_ReturnValue;   // 0x1FC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B96[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x1FC4(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x1FD4(0x10)(ZeroConstructor, NoDestructor)
	struct FProcessorRecipesRowHandle            K2Node_CustomEvent_Recipe;                         // 0x1FE4(0x18)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B97[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_16; // 0x2000(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Index;                          // 0x2008(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0x200C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AllowHotbarScroll_Allow;                  // 0x200D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B99[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventorySlot                        CallFunc_Array_Get_Item_1;                         // 0x2010(0x240)(ContainsInstancedReference)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x2250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsRowHandleValid_ReturnValue;             // 0x2251(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EDataValid                        CallFunc_FindCraftingRecipe_Paths;                 // 0x2252(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B9A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FProcessorRecipesRowHandle            CallFunc_FindCraftingRecipe_ReturnValue;           // 0x2254(0x18)(NoDestructor, HasGetValueTypeHash)
	enum class EDataValid                        CallFunc_ItemDataValid_Paths;                      // 0x226C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_8;                    // 0x226D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_9;                    // 0x226E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AllowHotbarScroll_Allow_1;                // 0x226F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_5;                 // 0x2270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMoveInputIgnored_ReturnValue_3;         // 0x2278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B9C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusCharacter*                      K2Node_DynamicCast_AsIcarus_Character_3;           // 0x2280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x2288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_8;                // 0x2289(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B9D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_6;                 // 0x2290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_7;                  // 0x2298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0x2299(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BA0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                K2Node_DynamicCast_AsIcarus_Player_Character;      // 0x22A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x22A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BA1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x22AC(0x10)(ZeroConstructor, NoDestructor)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x22BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x22C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_9;                // 0x22C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BA2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x22C8(0x10)(ZeroConstructor, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x22D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SpectatorActor_C*                  CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x22E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x22E8(0x10)(ZeroConstructor, NoDestructor)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_6;   // 0x22F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_7;   // 0x2300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagQuery                     CallFunc_MakeGameplayTagQuery_ReturnValue;         // 0x2308(0x48)(None)
	bool                                         CallFunc_DoesContainerMatchTagQuery_ReturnValue_1; // 0x2350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_DoesContainerMatchTagQuery_ReturnValue_2; // 0x2351(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x2352(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BA4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_17; // 0x2358(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAlive_ReturnValue_6;                    // 0x2360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_8;                  // 0x2361(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x2362(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0x2363(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsShowingRadialMenu_ShowingRadialMenu;    // 0x2364(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsShowingStaticWidget_Menu_Open_1;        // 0x2365(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_9;                  // 0x2366(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_10;                 // 0x2367(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x2368(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0x2369(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_IsDead;                         // 0x236A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_17;                   // 0x236B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BA7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_7;                 // 0x2370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PhotoCamera_C*                     K2Node_DynamicCast_AsBP_Photo_Camera;              // 0x2378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x2380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BAA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_3;                     // 0x2388(0x18)(HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_8;   // 0x23A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            K2Node_Event_Inventory;                            // 0x23A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bShowStoreAll;                        // 0x23B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bShowTakeAll;                         // 0x23B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BAC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x23B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_18;                   // 0x23C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BAE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_8;                 // 0x23C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Mount_Base_C*                      K2Node_DynamicCast_AsBP_Mount_Base;                // 0x23D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x23D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_19;                   // 0x23D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BAF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival_2; // 0x23E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0x23E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BB0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFlagSubsystem*                        CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x23F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_29;                    // 0x23F8(0x18)(HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_30;                    // 0x2410(0x18)(HasGetValueTypeHash)
	enum class EValid                            CallFunc_GetIcarusPlayerController_IsValid;        // 0x2428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerController*               CallFunc_GetIcarusPlayerController_ReturnValue;    // 0x2430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_20;                   // 0x2438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface;       // 0x2440(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_13;                    // 0x2450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_Base_C*             CallFunc_GetUserInterface_UserInterface;           // 0x2458(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_FieldGuide_C*                     CallFunc_Create_ReturnValue_4;                     // 0x2460(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_21;                   // 0x2468(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BB7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_UserInterface_C*                  K2Node_DynamicCast_AsUMG_User_Interface;           // 0x2470(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_14;                    // 0x2478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_10;                   // 0x2479(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_22;                   // 0x247A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BB9[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x2480(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ClassClass_ReturnValue;        // 0x2488(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BBA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFMODEventInstance                    CallFunc_PlayEvent2D_ReturnValue_1;                // 0x2490(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0x2498(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsFeatureLevelEnabled_ReturnValue;        // 0x2499(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x249A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BBC[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x249C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6BBD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x24B0(0x8)(NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x24B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BBF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_CustomEvent_Object;                         // 0x24C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_Location_1;                     // 0x24C8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_CustomEvent_Rotation_1;                     // 0x24D4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               K2Node_CustomEvent_Location;                       // 0x24E0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              K2Node_CustomEvent_Rotation;                       // 0x24EC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ECheatsEnabled                    CallFunc_IfCheatsEnabled_Paths;                    // 0x24F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_11;                   // 0x24F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BC0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_18; // 0x2500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSeated_ReturnValue;                     // 0x2508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BC1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASeatBase*                             CallFunc_GetAttachedToSeat_ReturnValue;            // 0x2510(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_SeatBase_C*                        K2Node_DynamicCast_AsBP_Seat_Base;                 // 0x2518(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_15;                    // 0x2520(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BC2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x2524(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6BC3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_9;                 // 0x2538(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMoveInputIgnored_ReturnValue_4;         // 0x2540(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusCharacter*                      K2Node_DynamicCast_AsIcarus_Character_4;           // 0x2548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_16;                    // 0x2550(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_10;               // 0x2551(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BC5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusRocket*                         K2Node_CustomEvent_Rocket;                         // 0x2558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_11;                 // 0x2560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BC6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_PlayerDropShip_C*                  K2Node_DynamicCast_AsBP_Player_Drop_Ship;          // 0x2568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_17;                    // 0x2570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BC8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_19; // 0x2578(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_AtmosphereController_C*            CallFunc_GetActorOfClass_ReturnValue;              // 0x2580(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_23;                   // 0x2588(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBiomesEnum                           CallFunc_RowHandleToStruct_ReturnValue;            // 0x2590(0x10)(HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalPlayerController_ReturnValue_1;    // 0x25A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_11;               // 0x25A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bHide;                                // 0x25A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bHideDebug;                           // 0x25A3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BCA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  Temp_struct_Variable;                              // 0x25A8(0x18)(HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_20; // 0x25C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_IcarusGameUserSettings_C*          CallFunc_Get_Icarus_Game_User_Settings_Settings;   // 0x25C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMouseSensitivityParameters_Yaw;        // 0x25D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMouseSensitivityParameters_Pitch;      // 0x25D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMouseSensitivityParameters_AimYaw;     // 0x25D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMouseSensitivityParameters_AimPitch;   // 0x25DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAlive_ReturnValue_7;                    // 0x25E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_12;                 // 0x25E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_7;                 // 0x25E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BCC[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_21; // 0x25E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnvQueryInstanceBlueprintWrapper*     K2Node_CustomEvent_QueryInstance;                  // 0x25F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEnvQueryStatus                   K2Node_CustomEvent_QueryStatus;                    // 0x25F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BCD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       CallFunc_GetQueryResultsAsLocations_ResultLocations; // 0x2600(0x10)(ReferenceParm)
	bool                                         CallFunc_GetQueryResultsAsLocations_ReturnValue;   // 0x2610(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BCE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Array_Get_Item_2;                         // 0x2614(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_2;         // 0x2620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BCF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x2624(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_10;                // 0x2630(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEnvQueryInstanceBlueprintWrapper*     CallFunc_RunEQSQuery_ReturnValue;                  // 0x2638(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ConfirmationPopup_C*              CallFunc_GetConfirmationWindow_ConfirmationWidget_2; // 0x2640(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputActionEvent_Key_31;                    // 0x2648(0x18)(HasGetValueTypeHash)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x2660(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BD2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConnectedPlayer                      CallFunc_FindInitialisedConnectedPlayerByController_OutConnectedPlayer_2; // 0x2668(0x38)(None)
	bool                                         CallFunc_FindInitialisedConnectedPlayerByController_ReturnValue_2; // 0x26A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_24;                   // 0x26A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_12;               // 0x26A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BD3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_32;                    // 0x26A8(0x18)(HasGetValueTypeHash)
	class FText                                  Temp_wildcard_Variable;                            // 0x26C0(0x18)(None)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_1;      // 0x26D8(0x98)(ContainsInstancedReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x2770(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x2780(0x10)(ZeroConstructor, NoDestructor)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_9;   // 0x2790(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterSurvivalBP_ReturnValue; // 0x2798(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIcarusPlayerCharacterSurvivalBP_Valid; // 0x27A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BD4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_10;  // 0x27A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_11;  // 0x27B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                  K2Node_InputKeyEvent_Key;                          // 0x27B8(0x18)(HasGetValueTypeHash)
	class UUMG_UserInterface_C*                  CallFunc_Create_ReturnValue_5;                     // 0x27D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalPlayerController_ReturnValue_2;    // 0x27D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BD5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x27DC(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsLocalPlayerController_ReturnValue_3;    // 0x27EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_13;               // 0x27ED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue_6;                   // 0x27EE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BD7[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDestroySessionCallbackProxy*          CallFunc_DestroySession_ReturnValue;               // 0x27F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_25;                   // 0x27F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsServer_ReturnValue_7;                   // 0x27F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BD8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             K2Node_CustomEvent_ItemData;                       // 0x2800(0x1F0)(ConstParm, ContainsInstancedReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x29F0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x2A00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue_14;               // 0x2A01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BDB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOutOfBoundsSubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue_2;          // 0x2A08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerOutOfBounds_ReturnValue;          // 0x2A10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BDC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x2A14(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6BDE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x2A28(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsLocalPlayerController_ReturnValue_4;    // 0x2A30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess_12;                   // 0x2A31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_26;                   // 0x2A32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_27;                   // 0x2A33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsShowingStaticWidget_Menu_Open_2;        // 0x2A34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BE0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_11;                // 0x2A38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PhotoCamera_C*                     K2Node_DynamicCast_AsBP_Photo_Camera_1;            // 0x2A40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_18;                    // 0x2A48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BE1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_22; // 0x2A50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_23; // 0x2A58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorEyesViewPoint_OutLocation;        // 0x2A60(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetActorEyesViewPoint_OutRotation;        // 0x2A6C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_12;  // 0x2A78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x2A80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BE4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASeatBase*                             CallFunc_GetAttachedToSeat_ReturnValue_1;          // 0x2A90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x2A98(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_28;                   // 0x2AA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BE5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x2AA8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BE6[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue_1;              // 0x2AC0(0x30)(IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMountSeat_ReturnValue;                  // 0x2AF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BE7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2; // 0x2AF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PhotoCamera_C*                     CallFunc_FinishSpawningActor_ReturnValue_2;        // 0x2B00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSeated_ReturnValue_1;                   // 0x2B08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BE9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UIcarusLinkedActorPanelBase> K2Node_Event_WidgetClass;                          // 0x2B10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_LinkedActor;                          // 0x2B18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bFocusCameraOnActor;                  // 0x2B20(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BEA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusRocket*                         K2Node_Event_Rocket;                               // 0x2B28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_2;      // 0x2B30(0x98)(ContainsInstancedReference)
	class UDestroySessionCallbackProxy*          CallFunc_DestroySession_ReturnValue_1;             // 0x2BC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_29;                   // 0x2BD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BEC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOutOfBoundsSubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue_3;          // 0x2BD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayerOutOfBounds_ReturnValue_1;        // 0x2BE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_IcarusPlayerCharacterSurvival_C*   CallFunc_GetIcarusPlayerCharacterBP_ReturnValue_24; // 0x2BE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_30;                   // 0x2BF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        K2Node_Event_Amount;                               // 0x2BF4(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMetaCurrencyRowHandle                K2Node_Event_Type;                                 // 0x2BF8(0x18)(ConstParm, NoDestructor, HasGetValueTypeHash)
	class AQuest*                                K2Node_Event_Quest;                                // 0x2C10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFactionMissionsRowHandle             K2Node_Event_MissionRowHandle;                     // 0x2C18(0x18)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsCurrentQuest;                      // 0x2C30(0x1)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BF2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMetaResource>                 K2Node_Event_ReceivedResources;                    // 0x2C38(0x10)(ConstParm, ReferenceParm)
	TScriptInterface<class IIOnProspectNotificationDisplay_C> CallFunc_QueueNotification_self_CastInput;         // 0x2C48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FFactionMission                       CallFunc_GetFactionMissionsStruct_FactionMissions; // 0x2C58(0xF0)(None)
	enum class EValid                            CallFunc_GetFactionMissionsStruct_Paths;           // 0x2D48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_13;                   // 0x2D49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BF3[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x2D4C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6BF4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOutOfBoundsSubsystem*                 CallFunc_GetWorldSubsystem_ReturnValue_4;          // 0x2D60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IIOnProspectNotificationDisplay_C> CallFunc_QueueNotification_self_CastInput_1;       // 0x2D68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPlayerOutOfBounds_ReturnValue_2;        // 0x2D78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BF5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x2D7C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6BF6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue_12;                // 0x2D90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetActorLocation_SweepHitResult_3;     // 0x2D98(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_K2_SetActorLocation_ReturnValue_3;        // 0x2E20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BF8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x2E24(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6BF9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemData>                     K2Node_CustomEvent_Items;                          // 0x2E38(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_19;           // 0x2E48(0x10)(ZeroConstructor, NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_20;           // 0x2E58(0x10)(ZeroConstructor, NoDestructor)
	struct FConfirmationPopupDetails             K2Node_MakeStruct_ConfirmationPopupDetails_3;      // 0x2E68(0x98)(ContainsInstancedReference)
	TScriptInterface<class IIOnProspectNotificationDisplay_C> CallFunc_QueueNotification_self_CastInput_2;       // 0x2F00(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CorpseUnstuck_CorpseAvailable;            // 0x2F10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6BFA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_21;           // 0x2F14(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_Event_NumCredits;                           // 0x2F24(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_NumExperience;                        // 0x2F28(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BFC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  K2Node_InputActionEvent_Key_4;                     // 0x2F30(0x18)(HasGetValueTypeHash)
	struct FItemData                             K2Node_Event_SourceItem;                           // 0x2F48(0x1F0)(ConstParm, ContainsInstancedReference)
	TScriptInterface<class IIOnProspectNotificationDisplay_C> CallFunc_QueueNotification_self_CastInput_3;       // 0x3138(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class AIcarusPlayerCharacter*                CallFunc_GetIcarusPlayerCharacter_ReturnValue_13;  // 0x3148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             K2Node_Event_ItemData_1;                           // 0x3150(0x1F0)(ConstParm, ContainsInstancedReference)
	class UIcarusLinkedActorPanelBase*           CallFunc_DisplayDynamicWidget_ReturnValue;         // 0x3340(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_BagInventory_C*                   K2Node_DynamicCast_AsUMG_Bag_Inventory;            // 0x3348(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_19;                    // 0x3350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6C03[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemData                             K2Node_Event_ItemData;                             // 0x3358(0x1F0)(ConstParm, ContainsInstancedReference)
	int32                                        K2Node_Event_ProgressAmount;                       // 0x3548(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldShowChallengePopup_ShouldShow;      // 0x354C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6C05[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_Chest_C*                          CallFunc_Create_ReturnValue_6;                     // 0x3550(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ServerMessage__DelegateSignature
struct ABP_IcarusPlayerControllerSurvival_C_ServerMessage__DelegateSignature_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.LocalMessageArrived__DelegateSignature
struct ABP_IcarusPlayerControllerSurvival_C_LocalMessageArrived__DelegateSignature_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C.ChatMessageArrived__DelegateSignature
struct ABP_IcarusPlayerControllerSurvival_C_ChatMessageArrived__DelegateSignature_Params
{
public:
	struct FTChatMessage                         Message;                                           // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

}
}


