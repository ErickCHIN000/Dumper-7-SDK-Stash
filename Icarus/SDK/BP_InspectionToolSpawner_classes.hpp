#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x280 - 0x220)
// BlueprintGeneratedClass BP_InspectionToolSpawner.BP_InspectionToolSpawner_C
class ABP_InspectionToolSpawner_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Sphere;                                            // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      Widget;                                            // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Distance;                                          // 0x240(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FVector                               ImpactPoint;                                       // 0x244(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UPhysicalMaterial*                     PhysicalMaterial;                                  // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class AActor*                                HitActor;                                          // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UPrimitiveComponent*                   HitComponent;                                      // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  BoneName;                                          // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         HoldTrace;                                         // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_5D79[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_InspectionToolPopup_C*            UMGWidgetRef;                                      // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_InspectionToolSpawner_C* GetDefaultObj();

	void DisplayWidget();
	void KillActor(float InLifespan);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_InspectionToolSpawner(int32 EntryPoint, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UUMG_InspectionToolPopup_C* K2Node_DynamicCast_AsUMG_Inspection_Tool_Popup, bool K2Node_DynamicCast_bSuccess, float K2Node_CustomEvent_InLifespan, float CallFunc_Subtract_FloatFloat_ReturnValue);
};

}


