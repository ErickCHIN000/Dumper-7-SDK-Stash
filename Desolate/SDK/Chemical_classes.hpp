#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x430 - 0x428)
// BlueprintGeneratedClass Chemical.Chemical_C
class AChemical_C : public AGenericCraftable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x428(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AChemical_C* GetDefaultObj();

	void OnUse(class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_Chemical(int32 EntryPoint, class ASHPlayerCharacter* K2Node_Event_Character, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess);
};

}


