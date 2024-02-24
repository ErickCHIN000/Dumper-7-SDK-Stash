#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x3F0 - 0x3D0)
// BlueprintGeneratedClass BP_MapPinClientActor.BP_MapPinClientActor_C
class ABP_MapPinClientActor_C : public AMapPinClientActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      Icon;                                              // 0x3D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x3E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UImage*                                MapPinIcon;                                        // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MapPinClientActor_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_MapPinClientActor(int32 EntryPoint, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UWBP_MapPinWorldspaceIcon_C* K2Node_DynamicCast_AsWBP_Map_Pin_Worldspace_Icon, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
};

}


