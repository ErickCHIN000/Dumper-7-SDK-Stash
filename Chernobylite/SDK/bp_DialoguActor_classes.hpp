#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x240 - 0x220)
// BlueprintGeneratedClass bp_DialoguActor.bp_DialoguActor_C
class Abp_DialoguActor_C : public AActor
{
public:
	class UAkComponent*                          Ak;                                                // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UDialogueComponent*                    NPCDialogue;                                       // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UBillboardComponent*                   Billboard;                                         // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Abp_DialoguActor_C* GetDefaultObj();

};

}


