#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7C (0xA4 - 0x28)
// BlueprintGeneratedClass BP_MySaveGame.BP_MySaveGame_C
class UBP_MySaveGame_C : public USaveGame
{
public:
	class FText                                  GameName;                                          // 0x28(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDateTime                             DateSaved;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class E_Difficulty                      Difficulty;                                        // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_27E4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TimePlayedSecond;                                  // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LevelName;                                         // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SlotName;                                          // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_27F0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            PlayerPosition;                                    // 0x70(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        NumberSave;                                        // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_MySaveGame_C* GetDefaultObj();

};

}


