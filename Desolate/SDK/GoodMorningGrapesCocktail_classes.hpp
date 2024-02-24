#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x438 - 0x430)
// BlueprintGeneratedClass GoodMorningGrapesCocktail.GoodMorningGrapesCocktail_C
class AGoodMorningGrapesCocktail_C : public AGenericWater_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x430(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AGoodMorningGrapesCocktail_C* GetDefaultObj();

	void OnUse(class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_GoodMorningGrapesCocktail(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character);
};

}


