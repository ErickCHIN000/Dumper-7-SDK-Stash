#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x469 - 0x458)
// BlueprintGeneratedClass BP_Ocean_Clear_Volume.BP_Ocean_Clear_Volume_C
class ABP_Ocean_Clear_Volume_C : public ADecorator
{
public:
	class UStaticMeshComponent*                  Mesh;                                              // 0x458(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      SphereCollision;                                   // 0x460(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Mesh;                                         // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Ocean_Clear_Volume_C* GetDefaultObj();

	void UserConstructionScript(bool CallFunc_K2_SetActorRotation_ReturnValue);
};

}


