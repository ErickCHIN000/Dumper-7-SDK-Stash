#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass object_input_save.object_input_save_C
class UObject_input_save_C : public USaveGame
{
public:
	TArray<struct FS_input_data>                 Keybindings_save;                                  // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UObject_input_save_C* GetDefaultObj();

};

}


