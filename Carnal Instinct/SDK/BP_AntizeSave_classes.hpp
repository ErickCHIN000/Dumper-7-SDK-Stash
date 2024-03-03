#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0xA0 - 0x28)
// BlueprintGeneratedClass BP_AntizeSave.BP_AntizeSave_C
class UBP_AntizeSave_C : public USaveGame
{
public:
	TArray<struct FS_GraphicIndex>               SaveGraphicIndex;                                  // 0x28(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FS_MyControls                         SaveControls;                                      // 0x38(0x2D)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_1794[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_MyAudio                            SaveAudio;                                         // 0x68(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FS_MyUI                               SaveUI;                                            // 0x78(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class FText                                  UserName;                                          // 0x88(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_AntizeSave_C* GetDefaultObj();

};

}


