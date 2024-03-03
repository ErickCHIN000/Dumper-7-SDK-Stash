#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// BlueprintGeneratedClass msl_object_game_save_loader.msl_object_game_save_loader_C
class UMsl_object_game_save_loader_C : public USaveGame
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x28(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class FString                                Loading_save_slot;                                 // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMsl_object_game_save_loader_C* GetDefaultObj();

	void ExecuteUbergraph_msl_object_game_save_loader(int32 EntryPoint);
};

}


