#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x224 (0x4E4 - 0x2C0)
// WidgetBlueprintGeneratedClass PhotoModeGalleryWidget.PhotoModeGalleryWidget_C
class UPhotoModeGalleryWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      BackgroundNotification;                            // 0x2C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpeningNotification;                               // 0x2D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          AlbumMinusCanvasPanel;                             // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background_0;                                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background_1;                                      // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Background_2;                                      // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBackgroundBlur*                       BackgroundBlur;                                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               BlackBackground;                                   // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               btnFullscreen;                                     // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               btnNextGalleryPage;                                // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               btnPrevGalleryPage;                                // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ButtonsMinusBorder_2;                              // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ButtonsMinusBottom;                                // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ButtonsMinusTop;                                   // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          ButtonsPanel;                                      // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandButton_C*                      Command_BackFullScreen;                            // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandButton_C*                      Command_Close;                                     // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandButton_C*                      Command_Delete;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandButton_C*                      Command_PhotoMode;                                 // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandButton_C*                      Command_Select;                                    // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandButton_C*                      Command_ShowHideMouseFullScreen;                   // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandButton_C*                      Command_ShowMouse;                                 // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommandButton_C*                      CommandButton_OpenPhotoModeFullscreen;             // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FadeImage;                                         // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          FullscreenMinusPanel;                              // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FullscreenImage;                                   // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          GalleryMinusPanel;                                 // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_19;                                          // 0x3A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       MainPanelSwitcher;                                 // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                NextFullScreen;                                    // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        NextPageMinusHorizontalBox;                        // 0x3B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               NextPageButton;                                    // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               NextPageFullscreen;                                // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                NextPageIcon;                                      // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PagesMinusHorizontalBox;                           // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            PagesScrollBox;                                    // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PreviousFullscreen;                                // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        PreviousPageMinusHorizontalBox;                    // 0x3F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               PreviousPageButton;                                // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               PrevPageFullscreen;                                // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PrevPageIcon;                                      // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_11;                                         // 0x410(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_13;                                         // 0x418(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_14;                                         // 0x420(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_1;                                       // 0x428(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox;                                       // 0x430(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_241;                                   // 0x438(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShowingMouse_;                                     // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EnumIcons                         IconsType;                                         // 0x441(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EnumIcons                         GamepadIconStyle;                                  // 0x442(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowMouseCursorOption_;                            // 0x443(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InFullscreen_;                                     // 0x444(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AF4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhotoModeComponent_C*                 PhotoModeComponent;                                // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               LastValidFocusedElement;                           // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<struct FPhotosData>                   FullPhotosData;                                    // 0x458(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UTexture2D*                            Fullscreen2DTexture;                               // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UCommonPage_C*>                 Pages;                                             // 0x470(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<class UCommonPhotoThumb_C*>           PhotosThumbs;                                      // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int32                                        PhotosPerPage;                                     // 0x490(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentPage;                                       // 0x494(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PageOffsetToLoad;                                  // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TotalPhotos;                                       // 0x49C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanFreeMemory_;                                    // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B09[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPhotosData                           CurrentDataInFullscreen;                           // 0x4A8(0x30)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UWidget*                               LastValidThumb;                                    // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         GamepadInput;                                      // 0x4E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KeyboardInput;                                     // 0x4E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanDelete;                                         // 0x4E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DeleteFunction;                                    // 0x4E3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPhotoModeGalleryWidget_C* GetDefaultObj();

	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue);
	enum class ESlateVisibility ShowHideDeleteOption(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void DeletePhoto(class UCommonPhotoThumb_C* ThumbToDelete, int32 CallFunc_Array_LastIndex_ReturnValue, class UCommonPage_C* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, class UCommonPage_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 Temp_int_Array_Index_Variable, class UCommonPage_C* CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsValidIndex_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Array_LastIndex_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 Temp_int_Variable_2, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_LastIndex_ReturnValue_2, class UCommonPhotoThumb_C* CallFunc_Array_Get_Item_3, class UCommonPage_C* CallFunc_Array_Get_Item_4, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UCommonPhotoThumb_C* CallFunc_Array_Get_Item_5, bool CallFunc_Array_IsValidIndex_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_4, class UCommonPhotoThumb_C* CallFunc_Array_Get_Item_6, bool CallFunc_Array_IsValidIndex_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, class UCommonPhotoThumb_C* CallFunc_Array_Get_Item_7, bool CallFunc_Array_RemoveItem_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_5, bool CallFunc_Array_IsValidIndex_ReturnValue_5, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class UCommonPage_C* CallFunc_Array_Get_Item_8, int32 Temp_int_Array_Index_Variable_2, class UCommonPhotoThumb_C* CallFunc_Array_Get_Item_9, const struct FPhotosData& CallFunc_Array_Get_Item_10, bool CallFunc_Array_RemoveItem_ReturnValue_1, class UCommonPhotoThumb_C* CallFunc_Array_Get_Item_11, bool CallFunc_Array_IsValidIndex_ReturnValue_6, class UCommonPhotoThumb_C* CallFunc_Array_Get_Item_12, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Max_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_7, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_FileExists_ReturnValue, bool CallFunc_FileExists_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class UCommonPhotoThumb_C* K2Node_DynamicCast_AsCommon_Photo_Thumb, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3);
	enum class ESlateVisibility SwapUpDownLeftRightVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	enum class ESlateVisibility Previous_Page_Button_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void CreatePages(int32 PagesToCreate, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCommonPage_C* CallFunc_Create_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue, class UCommonPage_C* CallFunc_Create_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_SafeDivide_ReturnValue, int32 CallFunc_FCeil_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2);
	struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FEventReply& K2Node_MakeStruct_EventReply, const struct FEventReply& K2Node_MakeStruct_EventReply_1, const struct FEventReply& K2Node_MakeStruct_EventReply_2, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& K2Node_MakeStruct_EventReply, bool CallFunc_IsValid_ReturnValue);
	void UpdatePhotosData(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FPhotosData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_FileExists_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_FileExists_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_LoadPhotos_SaveGameIsValid_, TArray<struct FPhotosData>& CallFunc_LoadPhotos_PhotosData);
	void CloseFullscreen(bool CallFunc_IsValid_ReturnValue);
	enum class ESlateVisibility ShowHideMouseVisibility(class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_NotEqual_IntInt_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_1);
	void SetIcons(const struct FPhotoModeComponentGalleryIcons& Icons, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, enum class EnumIcons Temp_byte_Variable, class UTexture2D* K2Node_Select_Default);
	class FText ShowHideMouseTxt();
	enum class ESlateVisibility Next_Page_Button_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void TabToOpen(int32 TabIndex, class UCommonButtonTab_C* CommonButtonPressed);
	void GalleryInitialization(bool EnableGallery_, class UPhotoModeComponent_C* PhotoModeComponentReference, bool ShowMouseCursorOption_, int32 DefaultGamepadIconsType);
	void Get_Any_Key(const struct FKey& Key);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Destruct();
	void SendPhotoData(const struct FPhotosData& PhotoData);
	void NextPage(bool NextFocusOnTheFirstPhoto);
	void PreviousPage(bool PrevFocusOnTheFirstPhoto);
	void LoadNextPrevPage(int32 NewPageIndex, bool PrevFocusOnTheFirstPhoto);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ResetKeyboardIcons();
	void BndEvt__NextPageFullscreen_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PrevGalleryPage_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PrevPageFullscreen_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__btnNextGalleryPage_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Command_BackFullScreen_K2Node_ComponentBoundEvent_4_OnPressed__DelegateSignature();
	void BndEvt__Command_Close_K2Node_ComponentBoundEvent_1_OnPressed__DelegateSignature();
	void BndEvt__Command_ShowMouse_K2Node_ComponentBoundEvent_2_OnPressed__DelegateSignature();
	void ShowMouse();
	void ResetShowMouseCursor();
	void BndEvt__Command_Select_K2Node_ComponentBoundEvent_3_OnPressed__DelegateSignature();
	void ResetFocus();
	void BndEvt__CommandButton_OpenPhotoModeFullscreen_K2Node_ComponentBoundEvent_5_OnPressed__DelegateSignature();
	void BndEvt__Command_PhotoMode_K2Node_ComponentBoundEvent_0_OnPressed__DelegateSignature();
	void BndEvt__PreviousPageButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__NextPageButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_PhotoModeGalleryWidget(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 K2Node_CustomEvent_NewPageIndex, bool K2Node_CustomEvent_PrevFocusOnTheFirstPhoto, bool K2Node_CustomEvent_PrevFocusOnTheFirstPhoto_1, bool K2Node_CustomEvent_NextFocusOnTheFirstPhoto, const struct FPhotosData& K2Node_Event_PhotoData, const struct FPhotosData& K2Node_MakeStruct_PhotosData, bool K2Node_Event_IsDesignTime, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_Get_Screenshot_File_IsValid_, class UTexture2D* CallFunc_Get_Screenshot_File_2D_Image, const class FString& CallFunc_Get_Screenshot_File_Base_Filename, const class FString& CallFunc_Get_Screenshot_File_Full_File_Path, const struct FPointerEvent& K2Node_Event_MouseEvent, const struct FGeometry& K2Node_Event_MyGeometry_1, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool CallFunc_IsUnderLocation_ReturnValue, const struct FKey& K2Node_CustomEvent_Key, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool CallFunc_Key_IsMouseButton_ReturnValue, bool CallFunc_Key_IsKeyboardKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_5, bool K2Node_CustomEvent_EnableGallery_, class UPhotoModeComponent_C* K2Node_CustomEvent_PhotoModeComponentReference, bool K2Node_CustomEvent_ShowMouseCursorOption_, int32 K2Node_CustomEvent_DefaultGamepadIconsType, bool K2Node_SwitchInteger_CmpSuccess, int32 K2Node_Event_TabIndex, class UCommonButtonTab_C* K2Node_Event_CommonButtonPressed, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_8, bool CallFunc_EqualEqual_KeyKey_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, class UCommonPhotoThumb_C* K2Node_DynamicCast_AsCommon_Photo_Thumb, bool K2Node_DynamicCast_bSuccess, const struct FPhotosData& K2Node_MakeStruct_PhotosData_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue_10, bool CallFunc_EqualEqual_KeyKey_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_12, bool CallFunc_EqualEqual_KeyKey_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_EqualEqual_KeyKey_ReturnValue_14, bool CallFunc_EqualEqual_KeyKey_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_3, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue_16, bool CallFunc_EqualEqual_KeyKey_ReturnValue_17, int32 Temp_int_Variable, bool CallFunc_BooleanOR_ReturnValue_8, const struct FKey& Temp_struct_Variable, int32 Temp_int_Array_Index_Variable_1, const struct FKey& Temp_struct_Variable_1, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue_3, const struct FKey& K2Node_Select_Default, class UCommonPhotoThumb_C* CallFunc_Array_Get_Item, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 Temp_int_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Get_Screenshot_File_IsValid__1, class UTexture2D* CallFunc_Get_Screenshot_File_2D_Image_1, const class FString& CallFunc_Get_Screenshot_File_Base_Filename_1, const class FString& CallFunc_Get_Screenshot_File_Full_File_Path_1, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_Get_Screenshot_File_IsValid__2, class UTexture2D* CallFunc_Get_Screenshot_File_2D_Image_2, const class FString& CallFunc_Get_Screenshot_File_Base_Filename_2, const class FString& CallFunc_Get_Screenshot_File_Full_File_Path_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue, int32 Temp_int_Array_Index_Variable_2, bool CallFunc_NotEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_5, const struct FPhotosData& CallFunc_Array_Get_Item_1, class UCommonPage_C* CallFunc_Array_Get_Item_2, const struct FPhotosData& K2Node_MakeStruct_PhotosData_2, class UCommonPhotoThumb_C* CallFunc_Array_Get_Item_3, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_6, class UCommonPage_C* CallFunc_Array_Get_Item_4, bool CallFunc_Array_IsValidIndex_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_7, class UCommonPage_C* CallFunc_Array_Get_Item_5, bool CallFunc_Array_IsValidIndex_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 Temp_int_Loop_Counter_Variable_2, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_9, bool CallFunc_Array_IsValidIndex_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_5, class UCommonPage_C* CallFunc_Array_Get_Item_6, bool CallFunc_Array_IsValidIndex_ReturnValue_5, class UCommonPhotoThumb_C* CallFunc_Array_Get_Item_7, int32 CallFunc_Add_IntInt_ReturnValue_11, bool Temp_bool_IsClosed_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_12, class UCommonPage_C* CallFunc_Array_Get_Item_8, bool CallFunc_Array_IsValidIndex_ReturnValue_6, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_Array_IsValidIndex_ReturnValue_7, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UCommonPage_C* CallFunc_Array_Get_Item_9, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Find_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_13, const struct FPhotosData& CallFunc_Array_Get_Item_10, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FPhotosData& K2Node_MakeStruct_PhotosData_3, bool CallFunc_Array_IsValidIndex_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_6, const struct FPhotosData& CallFunc_Array_Get_Item_11, class UCommonPhotoThumb_C* CallFunc_Array_Get_Item_12, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable_2, class UCommonPage_C* CallFunc_Array_Get_Item_13, class UCommonPhotoThumb_C* CallFunc_Array_Get_Item_14, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_Array_IsValidIndex_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_Get_Screenshot_File_IsValid__3, class UTexture2D* CallFunc_Get_Screenshot_File_2D_Image_3, const class FString& CallFunc_Get_Screenshot_File_Base_Filename_3, const class FString& CallFunc_Get_Screenshot_File_Full_File_Path_3, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, float CallFunc_Delay_Duration_ImplicitCast_2);
};

}


