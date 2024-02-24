#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x3B9 - 0x368)
// BlueprintGeneratedClass BP_Encounter_HopeEcho_Favour.BP_Encounter_HopeEcho_Favour_C
class ABP_Encounter_HopeEcho_Favour_C : public ABP_Encounter_HopeEcho_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Status_Effect_Duration;                            // 0x370(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Status_Effect_Level;                               // 0x378(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2366[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Favour_Index;                                      // 0x37C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FEncounterFavourData>          Favour_Rewards;                                    // 0x380(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FEncounterFavourData                  Active_Favour;                                     // 0x390(0x28)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	enum class EEncounterRewardType              Default_Encounter_Reward_Type;                     // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Encounter_HopeEcho_Favour_C* GetDefaultObj();

	void Spawn_Hope_Echo_Escape_AVFX();
	void Restore_Rewards_On_Persistence(TArray<struct FEncounterFavourData>& CallFunc_GenerateFavourRewards_ReturnValue);
	void Cycle_Through_Glyphs(int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	bool GetInteractionTag(struct FGameplayTag* InteractionTag);
	void Initialize(class AEncounterBase* SpawningEncounter, enum class EEncounterRewardType EncounterRewardType);
	void ExecuteUbergraph_BP_Encounter_HopeEcho_Favour(int32 EntryPoint, TArray<struct FEncounterFavourData>& CallFunc_GenerateFavourRewards_ReturnValue, int32 Temp_int_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AEncounterBase* K2Node_Event_SpawningEncounter, enum class EEncounterRewardType K2Node_Event_EncounterRewardType);
};

}


