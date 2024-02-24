#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x3D8 - 0x340)
// WidgetBlueprintGeneratedClass WBP_Tooltip_MapMarker.WBP_Tooltip_MapMarker_C
class UWBP_Tooltip_MapMarker_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Icon;                                              // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_body;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_Title;                                         // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_worldPosition;                                 // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Tooltip_Text_Title;                                // 0x368(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Tooltip_Text_Body;                                 // 0x380(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  Tooltip_Text_Coord;                                // 0x398(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	TSoftObjectPtr<class UTexture2D>             Soft_Texture_Icon;                                 // 0x3B0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Tooltip_MapMarker_C* GetDefaultObj();

	void RefreshMapMarker(class FText TitleText, class FText BodyText, class FText CoordText, TSoftObjectPtr<class UTexture2D> IconTexture);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_WBP_Tooltip_MapMarker(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


