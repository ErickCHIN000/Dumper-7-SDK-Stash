#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x98 - 0x28)
// BlueprintGeneratedClass msl_object_game_save.msl_object_game_save_C
class UMsl_object_game_save_C : public USaveGame
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	bool                                         Is_autosave;                                       // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7B2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Save_name;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                  Level_name;                                        // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                             Date_time;                                         // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          Actor_root_list;                                   // 0x58(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FS_save_actor_01_root>         Actor_root_data;                                   // 0x68(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          Var_root_list;                                     // 0x78(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FS_save_var_01_root>           Var_root_data;                                     // 0x88(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UMsl_object_game_save_C* GetDefaultObj();

	void ExecuteUbergraph_msl_object_game_save(int32 EntryPoint);
};

}


