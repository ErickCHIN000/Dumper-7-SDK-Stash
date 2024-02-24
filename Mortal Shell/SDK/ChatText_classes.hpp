#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x250 - 0x230)
// WidgetBlueprintGeneratedClass ChatText.ChatText_C
class UChatText_C : public UUserWidget
{
public:
	class UTextBlock*                            MessageWidget;                                     // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ActualText;                                        // 0x238(0x18)(Edit, BlueprintVisible, Net, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UChatText_C* GetDefaultObj();

};

}


