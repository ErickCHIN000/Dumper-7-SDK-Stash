#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2A0 - 0x260)
// WidgetBlueprintGeneratedClass wid_Collectible.wid_Collectible_C
class UWid_Collectible_C : public UUserWidget
{
public:
	class UTextBlock*                            _Description;                                      // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            _Header;                                           // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Header;                                            // 0x270(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Description;                                       // 0x288(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWid_Collectible_C* GetDefaultObj();

};

}


