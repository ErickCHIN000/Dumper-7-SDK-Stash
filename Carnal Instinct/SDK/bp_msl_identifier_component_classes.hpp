#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x130 - 0xB0)
// BlueprintGeneratedClass bp_msl_identifier_component.bp_msl_identifier_component_C
class Ubp_msl_identifier_component_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                         Save_actor;                                        // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Use_initial_id;                                    // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Use_object_id;                                     // 0xBA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1421[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Initial_id;                                        // 0xBC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Actor_unique_id;                                   // 0xC4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1428[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        String_data;                                       // 0xD0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Random_range_min;                                  // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Random_range_max;                                  // 0xE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Ed_savegame;                                       // 0xE8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Ed_loadgame;                                       // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Ed_begingame;                                      // 0x108(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Is_game_loaded;                                    // 0x118(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_loaded_savefile;                                // 0x119(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_144D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            Ed_loadspawn;                                      // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class Ubp_msl_identifier_component_C* GetDefaultObj();

	void Get_id(bool* Is_valid, class FName* Actor_unique_id, bool CallFunc_NotEqual_NameName_ReturnValue);
	class FName Random_id(const class FString& Output_id, const TArray<class FString>& Local_string_data, const class FString& CallFunc_ToLower_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, int32 Temp_int_Variable, int32 CallFunc_Array_LastIndex_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item_1, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue);
	void Compare_id(class FName Actor_id, bool* Is_exist, TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void Set_id(class FName New_id, bool Random_if_exist, class FName* Actor_id, bool* Success, bool Local_random, class FName Local_id, class FName CallFunc_random_id_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_compare_id_is_exist, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool K2Node_MultiGate_FirstRun, int32 K2Node_MultiGate_Data, bool K2Node_MultiGate_ScratchBool, int32 K2Node_MultiGate_ScratchIndex);
	void Call_ed_save();
	void Call_ed_load();
	void Call_ed_begin(bool Is_loaded_savefile);
	void Call_ed_load_spawn(bool Is_destroyed);
	void ExecuteUbergraph_bp_msl_identifier_component(int32 EntryPoint, bool K2Node_CustomEvent_is_destroyed, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName CallFunc_set_id_actor_id, bool CallFunc_set_id_success, bool K2Node_CustomEvent_is_loaded_savefile, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FName CallFunc_set_id_actor_id_1, bool CallFunc_set_id_success_1);
	void Ed_loadspawn__DelegateSignature(bool Is_destroyed);
	void Ed_begingame__DelegateSignature(bool Loaded_save_file);
	void Ed_loadgame__DelegateSignature();
	void Ed_savegame__DelegateSignature();
};

}


