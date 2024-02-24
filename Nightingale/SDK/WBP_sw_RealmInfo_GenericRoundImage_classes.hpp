#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x378 - 0x340)
// WidgetBlueprintGeneratedClass WBP_sw_RealmInfo_GenericRoundImage.WBP_sw_RealmInfo_GenericRoundImage_C
class UWBP_sw_RealmInfo_GenericRoundImage_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Img_Icon;                                          // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x350(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_sw_RealmInfo_GenericRoundImage_C* GetDefaultObj();

	void SetImage(TSoftObjectPtr<class UTexture2D> Icon);
	void Construct();
	void ExecuteUbergraph_WBP_sw_RealmInfo_GenericRoundImage(int32 EntryPoint);
};

}


