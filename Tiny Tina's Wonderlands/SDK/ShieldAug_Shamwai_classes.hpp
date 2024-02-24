#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x2B8 - 0x2B8)
// BlueprintGeneratedClass ShieldAug_Shamwai.ShieldAug_Shamwai_C
class UShieldAug_Shamwai_C : public UShieldAugment_Damage
{
public:

	static class UClass* StaticClass();
	static class UShieldAug_Shamwai_C* GetDefaultObj();

	void K2_TriggerEffect(class AShield* Shield, const struct FGameResourcePoolReference& ResourcePool, struct FAugmentData& StackData, enum class EOakElementalType Temp_byte_Variable, class UClass* CallFunc_GetDamageType_ReturnValue, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue, class USplatData* Temp_object_Variable, class USplatData* Temp_object_Variable1, class USplatData* Temp_object_Variable2, class USplatData* Temp_object_Variable3, class USplatData* Temp_object_Variable4, class USplatData* Temp_object_Variable5, class USplatData* K2Node_Select_Default);
};

}


