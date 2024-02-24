#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD1 (0x391 - 0x2C0)
// WidgetBlueprintGeneratedClass CommonPhotoThumb.CommonPhotoThumb_C
class UCommonPhotoThumb_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      NotifySelection;                                   // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               ButtonPhoto;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          Edges;                                             // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PhotoFrame;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FPhotosData                           PhotoData;                                         // 0x2E8(0x30)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FLinearColor                          CurrentColor;                                      // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Texture;                                           // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            Frame;                                             // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             BaseSize;                                          // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SizeMultiplier;                                    // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhotoModeGalleryWidget_C*             GalleryReference;                                  // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SendPhoto;                                         // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCommonPage_C*                         Page;                                              // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameFocusedColor;                                 // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FrameUnfocusedColor;                               // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Focused;                                           // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCommonPhotoThumb_C* GetDefaultObj();

	enum class ESlateVisibility Edges_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	struct FLinearColor FrameFocusedAndUnfocusedColor(bool CallFunc_IsHovered_ReturnValue, bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_HasAnyUserFocus_ReturnValue_1, bool CallFunc_HasAnyUserFocus_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void SetPhotoData(const struct FPhotosData& PhotoInfo);
	void Initialize(class UPhotoModeGalleryWidget_C* GalleryReference, class UCommonPage_C* OwnPage);
	void Destruct();
	void BndEvt__ButtonPhoto_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Animation();
	void ResetThumb();
	void UpdatePhoto();
	void DeleteData();
	void ResetThumbAnimation();
	void ExecuteUbergraph_CommonPhotoThumb(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FPhotosData& K2Node_MakeStruct_PhotosData, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FPhotosData& K2Node_CustomEvent_PhotoInfo, class UPhotoModeGalleryWidget_C* K2Node_CustomEvent_GalleryReference, class UCommonPage_C* K2Node_CustomEvent_OwnPage, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, TScriptInterface<class IPhotoModeDataInterface_C> K2Node_DynamicCast_AsPhoto_Mode_Data_Interface, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_HasAnyUserFocus_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_HasAnyUserFocus_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Get_Screenshot_File_IsValid_, class UTexture2D* CallFunc_Get_Screenshot_File_2D_Image, const class FString& CallFunc_Get_Screenshot_File_Base_Filename, const class FString& CallFunc_Get_Screenshot_File_Full_File_Path, bool CallFunc_HasAnyUserFocus_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable);
	void SendPhoto__DelegateSignature(const struct FPhotosData& PhotoData);
};

}


