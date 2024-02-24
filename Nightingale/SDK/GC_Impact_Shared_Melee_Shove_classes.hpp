#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x78 - 0x78)
// BlueprintGeneratedClass GC_Impact_Shared_Melee_Shove.GC_Impact_Shared_Melee_Shove_C
class UGC_Impact_Shared_Melee_Shove_C : public UGC_Impact_Shared_Melee_C
{
public:

	static class UClass* StaticClass();
	static class UGC_Impact_Shared_Melee_Shove_C* GetDefaultObj();

	void GetElementTagFromActor(class AActor* Actor, struct FGameplayTag* ElementalTag);
	void Get_Impact_Tag(class UObject* Object, struct FGameplayTag* Tag);
};

}


