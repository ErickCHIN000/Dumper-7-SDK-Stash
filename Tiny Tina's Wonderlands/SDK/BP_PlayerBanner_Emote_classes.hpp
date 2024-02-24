#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x4D0 - 0x4B8)
// BlueprintGeneratedClass BP_PlayerBanner_Emote.BP_PlayerBanner_Emote_C
class ABP_PlayerBanner_Emote_C : public APlayerBanner
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Pole;                                              // 0x4C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxStaticMeshComponent*               GbxStaticMesh;                                     // 0x4C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PlayerBanner_Emote_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_BP_PlayerBanner_Emote(class UGbxCustomizationData* Customization);
	void ExecuteUbergraph_BP_PlayerBanner_Emote(int32 EntryPoint, class UGbxCustomizationData* K2Node_ComponentBoundEvent_Customization);
};

}


