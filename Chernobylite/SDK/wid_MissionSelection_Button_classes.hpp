#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x33 (0x293 - 0x260)
// WidgetBlueprintGeneratedClass wid_MissionSelection_Button.wid_MissionSelection_Button_C
class UWid_MissionSelection_Button_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTextBlock*                            BtnName;                                           // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_ButtonIndicator_C*                ButtonIndicator;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x278(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class Enum_Buttons_PC                   Image_PC;                                          // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Buttons_X1                   Image_X1;                                          // 0x291(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class Enum_Buttons_PS4                  Image_PS4;                                         // 0x292(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_MissionSelection_Button_C* GetDefaultObj();

	void SetName(class FText Name);
	void ChangeImage(enum class Enum_Buttons_PC Pc, enum class Enum_Buttons_X1 X1, enum class Enum_Buttons_PS4 PS4);
	void SetTextures(class UTexture2D* Pc, class UTexture2D* PS4, class UTexture2D* XBOX1);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Update();
	void ExecuteUbergraph_wid_MissionSelection_Button(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


