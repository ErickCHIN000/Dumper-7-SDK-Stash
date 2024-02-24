#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x2D8 - 0x220)
// BlueprintGeneratedClass BP_InspectionToolGeneric.BP_InspectionToolGeneric_C
class ABP_InspectionToolGeneric_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Sphere;                                            // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      Widget;                                            // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         HoldTrace;                                         // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3187[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            HitResult;                                         // 0x244(0x88)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, ExposeOnSpawn)
	enum class EDevToolMode                      Mode;                                              // 0x2CC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_318D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_InspectionToolPopup_C*            CachedWidget;                                      // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_InspectionToolGeneric_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void Kill();
	void DisplayWidget();
	void ExecuteUbergraph_BP_InspectionToolGeneric(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUMG_InspectionToolPopup_C* K2Node_DynamicCast_AsUMG_Inspection_Tool_Popup, bool K2Node_DynamicCast_bSuccess);
};

}


