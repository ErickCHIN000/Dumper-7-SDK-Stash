#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x478 - 0x460)
// BlueprintGeneratedClass BP_StandIn_Shrine.BP_StandIn_Shrine_C
class ABP_StandIn_Shrine_C : public AGenericStandInActor
{
public:
	class USpotLightComponent*                   SpotLight;                                         // 0x460(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxStaticMeshComponent*               GbxStaticMesh;                                     // 0x468(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxParticleSystemComponent*           GbxParticleSystem;                                 // 0x470(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_StandIn_Shrine_C* GetDefaultObj();

	void UserConstructionScript();
};

}


