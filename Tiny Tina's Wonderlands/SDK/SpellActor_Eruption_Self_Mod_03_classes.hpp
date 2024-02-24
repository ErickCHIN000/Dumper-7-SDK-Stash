#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x510 - 0x508)
// BlueprintGeneratedClass SpellActor_Eruption_Self_Mod_03.SpellActor_Eruption_Self_Mod_03_C
class ASpellActor_Eruption_Self_Mod_03_C : public ASpellActor_Eruption_Self_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x508(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ASpellActor_Eruption_Self_Mod_03_C* GetDefaultObj();

	void UserConstructionScript();
	void BeginCleanup();
	void ExecuteUbergraph_SpellActor_Eruption_Self_Mod_03(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class EOakElementalType Temp_byte_Variable, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class USplatData* Temp_object_Variable, class USplatData* Temp_object_Variable1, class USplatData* Temp_object_Variable2, class USplatData* Temp_object_Variable3, class USplatData* Temp_object_Variable4, class USplatData* Temp_object_Variable5, class UClass* CallFunc_GetSpellDamageType_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, int32 CallFunc_SpawnActorAsync_ReturnValue, class USplatData* K2Node_Select_Default);
};

}


