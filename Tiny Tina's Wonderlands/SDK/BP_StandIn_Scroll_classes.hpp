#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x470 - 0x460)
// BlueprintGeneratedClass BP_StandIn_Scroll.BP_StandIn_Scroll_C
class ABP_StandIn_Scroll_C : public AGenericStandInActor
{
public:
	class USpotLightComponent*                   SpotLight;                                         // 0x460(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxStaticMeshComponent*               GbxStaticMesh;                                     // 0x468(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_StandIn_Scroll_C* GetDefaultObj();

	void UserConstructionScript();
};

}


