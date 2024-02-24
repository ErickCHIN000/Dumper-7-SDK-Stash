#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E (0xBE - 0xA0)
// BlueprintGeneratedClass BP_InteractableComponent.BP_InteractableComponent_C
class UBP_InteractableComponent_C : public UActorComponent
{
public:
	class FString                                InteractionText;                                   // 0xA0(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         Enabled;                                           // 0xB0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2485[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumberOfUses;                                      // 0xB4(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TimesUsed;                                         // 0xB8(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Interaction_Distance            InteractionDistance;                               // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemQuality                      Quality;                                           // 0xBD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_InteractableComponent_C* GetDefaultObj();

	void GetEnabled(bool* Enabled);
	void SetDisabled();
	void SetEnabled();
	void UseInteraction(bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Variable);
};

}


