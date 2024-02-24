#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x278 - 0x24C)
// BlueprintGeneratedClass BP_CardPreview.BP_CardPreview_C
class ABP_CardPreview_C : public ABP_ActorPreview_C
{
public:
	uint8                                        Pad_3659[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  PointLight1;                                       // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                  PointLight;                                        // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                      Widget;                                            // 0x268(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Card;                                              // 0x270(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_CardPreview_C* GetDefaultObj();

	void SetCardRotation(const struct FRotator& Rotation, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
	void UpdateCard(class UMaterialInterface* Material, class FText Text, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UUMG_CardText_C* K2Node_DynamicCast_AsUMG_Card_Text, bool K2Node_DynamicCast_bSuccess);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CardPreview(int32 EntryPoint);
};

}


