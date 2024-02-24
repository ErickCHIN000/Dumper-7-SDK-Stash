#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A0 (0x1C8 - 0x28)
// BlueprintGeneratedClass CustomButtonStyle.CustomButtonStyle_C
class UCustomButtonStyle_C : public UObject
{
public:
	struct FSlateBrush                           NormalImage;                                       // 0x28(0x88)(Edit, BlueprintVisible, AdvancedDisplay, ExposeOnSpawn)
	struct FSlateBrush                           FocusedImage;                                      // 0xB0(0x88)(Edit, BlueprintVisible, AdvancedDisplay, ExposeOnSpawn)
	struct FSlateBrush                           SelectedImage;                                     // 0x138(0x88)(Edit, BlueprintVisible, AdvancedDisplay, ExposeOnSpawn)
	struct FVector2D                             BrushSize;                                         // 0x1C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCustomButtonStyle_C* GetDefaultObj();

};

}


