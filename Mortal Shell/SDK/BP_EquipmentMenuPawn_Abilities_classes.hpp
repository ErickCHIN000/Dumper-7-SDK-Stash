#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x328 - 0x310)
// BlueprintGeneratedClass BP_EquipmentMenuPawn_Abilities.BP_EquipmentMenuPawn_Abilities_C
class ABP_EquipmentMenuPawn_Abilities_C : public ABP_EquipmentMenuPawn_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpotLightComponent*                   SpotLight;                                         // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                WaifuSkeletalMesh;                                 // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_EquipmentMenuPawn_Abilities_C* GetDefaultObj();

	void ShowSelf();
	void HideSelf();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_EquipmentMenuPawn_Abilities(int32 EntryPoint);
};

}


