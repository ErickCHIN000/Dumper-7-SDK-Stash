#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xE0 - 0xA8)
// BlueprintGeneratedClass BTT_NPC_RoamInPOI.BTT_NPC_RoamInPOI_C
class UBTT_NPC_RoamInPOI_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class APawn*                                 PawnRef;                                           // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UComp_NPC_Controller_C*                NPCController;                                     // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugLocation;                                     // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_175E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               RandomLocation;                                    // 0xC4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaitAtDestination;                                 // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1766[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_NPC_BoundingBox_C*                 SelectedBounds;                                    // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_NPC_RoamInPOI_C* GetDefaultObj();

	void OnFail_1ADF15054CE2FDE17971BE94786A962F(enum class EPathFollowingResult MovementResult);
	void OnSuccess_1ADF15054CE2FDE17971BE94786A962F(enum class EPathFollowingResult MovementResult);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_NPC_RoamInPOI(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_fnRequestStation_Found_Station, bool CallFunc_fnRequestStation_Same_Station, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, class UComp_NPC_Controller_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, enum class EPathFollowingResult Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue_4, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, bool CallFunc_Array_IsValidIndex_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_GetScaledBoxExtent_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_RandomPointInBoundingBox_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FVector& CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation, bool CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class ABP_NPC_BoundingBox_C* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_GetScaledBoxExtent_ReturnValue_1, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FVector& CallFunc_RandomPointInBoundingBox_ReturnValue_1, const struct FVector& CallFunc_TransformLocation_ReturnValue_1, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, const struct FVector& CallFunc_MakeVector_ReturnValue_3, const struct FVector& CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation_1, bool CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue_1);
};

}


