#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x280 - 0x258)
// Class ManeaterUI.AbilityTierWidget
class UAbilityTierWidget : public UTwBaseWidget
{
public:
	class UAgeTierDiamond*                       AgeTierDiamond1;                                   // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAgeTierDiamond*                       AgeTierDiamond2;                                   // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAgeTierDiamond*                       AgeTierDiamond3;                                   // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAgeTierDiamond*                       AgeTierDiamond4;                                   // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            AbilityDescription;                                // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAbilityTierWidget* GetDefaultObj();

};

// 0x20 (0x278 - 0x258)
// Class ManeaterUI.AgeTierDiamond
class UAgeTierDiamond : public UTwBaseWidget
{
public:
	class UImage*                                PipBG;                                             // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                PipFill;                                           // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCanvasPanel*                          NewPip;                                            // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                      InAnimation;                                       // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAgeTierDiamond* GetDefaultObj();

};

// 0x78 (0x2D0 - 0x258)
// Class ManeaterUI.AgeTierInfographicWidget
class UAgeTierInfographicWidget : public UTwBaseWidget
{
public:
	class UTwBaseButton*                         EvolutionUpgradeButton_BP;                         // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            AgeTierText;                                       // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTierWidget*                    AbilityTierWidget1;                                // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTierWidget*                    AbilityTierWidget2;                                // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAbilityTierWidget*                    AbilityTierWidget3;                                // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVerticalBox*                          UpgradeVerticalBox;                                // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            UpgradeAbilityText;                                // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                AbilityIconImage;                                  // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            AbilityIconTailwhip;                               // 0x298(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            AbilityIconWhipshot;                               // 0x2A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                      InAnimation;                                       // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         AudioEventShowWidget;                              // 0x2B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53A[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAgeTierInfographicWidget* GetDefaultObj();

	void OnEvolutionUpgradeButton_BP_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked);
};

// 0x8 (0x260 - 0x258)
// Class ManeaterUI.AttributesWidget
class UAttributesWidget : public UTwBaseWidget
{
public:
	class AME_InventoryActor*                    InventoryActor;                                    // 0x258(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAttributesWidget* GetDefaultObj();

	void UpdateAttributes();
};

// 0x10 (0x268 - 0x258)
// Class ManeaterUI.AwarenessWidget
class UAwarenessWidget : public UTwBaseWidget
{
public:
	uint8                                        Pad_56C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                Lock;                                              // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAwarenessWidget* GetDefaultObj();

	void SetLocked(bool bLocked);
	void SetDLCType(enum class EDLCType DLCType);
	void SetAwareness(float Awareness);
};

// 0x30 (0x288 - 0x258)
// Class ManeaterUI.BaseObjectiveDecorator
class UBaseObjectiveDecorator : public UTwBaseWidget
{
public:
	float                                        LifeTime;                                          // 0x258(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_57E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      InAnimation;                                       // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      IdleAnimation;                                     // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OutAnimation;                                      // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UME_PlayerObjective*                   AssignedObjective;                                 // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_584[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBaseObjectiveDecorator* GetDefaultObj();

	void DelayedOutAnimation();
};

// 0x98 (0x2F0 - 0x258)
// Class ManeaterUI.MapMarkerWidget
class UMapMarkerWidget : public UTwBaseWidget
{
public:
	class UCanvasPanel*                          MarkerCanvas;                                      // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                MarkerImage;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  MarkerName;                                        // 0x268(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  MarkerDescription;                                 // 0x280(0x18)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	enum class EMarkerType                       MarkerType;                                        // 0x298(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5C8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Position;                                          // 0x29C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Rotation;                                          // 0x2A4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             Offset;                                            // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>             IconOverride;                                      // 0x2B0(0x28)(BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MarkerRadius;                                      // 0x2D8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             MapScale;                                          // 0x2DC(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5D4[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMapMarkerWidget* GetDefaultObj();

	void OnInteractButtonUp();
	void OnInteractButtonDown();
	void OnActiveFilterChanged(enum class EMarkerType NewMarkerTypeFilter);
};

// 0x50 (0x340 - 0x2F0)
// Class ManeaterUI.BountyBoatMapMarkerWidget
class UBountyBoatMapMarkerWidget : public UMapMarkerWidget
{
public:
	TSoftObjectPtr<class UTexture2D>             LeaderIcon;                                        // 0x2F0(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>             BoatIcon;                                          // 0x318(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UBountyBoatMapMarkerWidget* GetDefaultObj();

};

// 0x170 (0x408 - 0x298)
// Class ManeaterUI.BountyPanel
class UBountyPanel : public UTwBaseMenuPanel
{
public:
	TArray<TSoftObjectPtr<class UTexture2D>>     InfamyRankIcons;                                   // 0x298(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            HunterFirstName;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            HunterLastName;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            GuideText;                                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                HunterIcon;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                HunterPortrait;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            HunterBio;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            HunterQuote;                                       // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                RankIcon;                                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        SupportBox;                                        // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInfamyRewardWidget*                   RewardWidget;                                      // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          ProgressBox;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          Progress;                                          // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CurrentLevel;                                      // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            NextLevel;                                         // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          RightContent;                                      // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          CenterContent;                                     // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          LeftContent;                                       // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            HunterNumber;                                      // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                   Hunter1;                                           // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                   Hunter2;                                           // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                   Hunter3;                                           // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                   Hunter4;                                           // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                   Hunter5;                                           // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                   Hunter6;                                           // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                   Hunter7;                                           // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                   Hunter8;                                           // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                   Hunter9;                                           // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHunterButtonWidget*                   Hunter10;                                          // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            OnHoldText;                                        // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_646[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GuideTextTemplate;                                 // 0x3A8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<class UHunterSupportIcon*>            SupportEntries;                                    // 0x3C0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UInfamyTierIcon*>               TierIcons;                                         // 0x3D0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UHunterSupportIcon>        HunterSupportIconClass;                            // 0x3E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UInfamyTierIcon>           TierIconClass;                                     // 0x3E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumLevels;                                         // 0x3F0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_653[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      NewRank;                                           // 0x3F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_655[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBountyPanel* GetDefaultObj();

	void OnHunterButton_Focused(class UHunterButtonWidget* HunterButtonWidget);
	void OnControllerDisconnectedModalDismissed();
	class UME_BountyTier* GetBountyDataForRank(uint8 Rank);
};

// 0x1A0 (0x3F8 - 0x258)
// Class ManeaterUI.BountyTimer
class UBountyTimer : public UTwBaseWidget
{
public:
	float                                        TierProgressLerpTime;                              // 0x258(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_66F[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressBar*                          ProgressTime;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                InfamyProgressRadial;                              // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                InfamyProgressRadialBackground;                    // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                TierIcon;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TimerText;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            InfamyTierText;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            StatusText;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  HuntingStatusText;                                 // 0x2A0(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  SearchingStatusText;                               // 0x2B8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  ReinforcementStatusText;                           // 0x2D0(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  ThreatStatusText;                                  // 0x2E8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateColor                           ReinforcementTextColor;                            // 0x300(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateColor                           BountyTextColor;                                   // 0x328(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FSlateColor                           ThreatTextColor;                                   // 0x350(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FLinearColor                          ReinforcementBGColor;                              // 0x378(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          HuntingBGColor;                                    // 0x388(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          SearchingBGColor;                                  // 0x398(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          ThreatBGColor;                                     // 0x3A8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      RankUp;                                            // 0x3B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      InAnimation;                                       // 0x3C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OutAnimation;                                      // 0x3C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      Idle_Searching;                                    // 0x3D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class UTexture2D>>     InfamyRankIcons;                                   // 0x3D8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_692[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBountyTimer* GetDefaultObj();

};

// 0x10 (0x268 - 0x258)
// Class ManeaterUI.CompassMarkerWidget
class UCompassMarkerWidget : public UTwBaseWidget
{
public:
	class UImage*                                Icon;                                              // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            DirectionText;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCompassMarkerWidget* GetDefaultObj();

};

// 0x140 (0x398 - 0x258)
// Class ManeaterUI.CompassWidget
class UCompassWidget : public UTwBaseWidget
{
public:
	class UCanvasPanel*                          CompassStrip;                                      // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          MarkerCanvas;                                      // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                CompassCombatBG;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                CompassBG;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanelSlot*                      StripSlot;                                         // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        TotalSegments;                                     // 0x280(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        UniqueSegments;                                    // 0x284(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCompassMarkerWidget>      MarkerClass;                                       // 0x288(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          BGOutOfCombatColor;                                // 0x290(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          BGInCombatColor;                                   // 0x2A0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          CombatBGInCombatColor;                             // 0x2B0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          CombatBGOutOfCombatColor;                          // 0x2C0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            BoatIcon;                                          // 0x2D0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            BossBoatIcon;                                      // 0x2D8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            ScalyPeteIcon;                                     // 0x2E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            WaypointIcon;                                      // 0x2E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            WildlifeEnemyIcon;                                 // 0x2F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            UndiscoveredIcon;                                  // 0x2F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class AActor>>         TrackedActors;                                     // 0x300(0x10)(ZeroConstructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<TWeakObjectPtr<class AActor>, class UCompassMarkerWidget*> TrackedActorWidgetMap;                             // 0x310(0x50)(ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_724[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCompassMarkerWidget*                  PlayerWaypointMarker;                              // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_72A[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FCompassDirection>             DirectionWidgets;                                  // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            GrottoIcon;                                        // 0x390(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCompassWidget* GetDefaultObj();

	void RemoveTrackedActor(class AActor* Actor);
	void OnAICombatStatusChanged(bool bInCombat, class AME_AIController* AIActor);
	void OnActorRequestingWidget(class AActor* Actor);
	void OnActorRequestingRemoval(class AActor* Actor);
	void AddTrackedActor(struct FTrackedCompassActor& Actor);
};

// 0x88 (0x2E0 - 0x258)
// Class ManeaterUI.ContextualControlWidget
class UContextualControlWidget : public UTwBaseWidget
{
public:
	TMap<class FName, class UContextualControlWidgetEntry*> WidgetMap;                                         // 0x258(0x50)(ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UContextualControlWidgetEntry> EntryWidgetClass;                                  // 0x2A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          WidgetContainer;                                   // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        ControlWidgetPoolSize;                             // 0x2B8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_765[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UContextualControlWidgetEntry*> ControlWidgetPool;                                 // 0x2C0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UContextualControlWidgetEntry*> ControlWidgetUsedPool;                             // 0x2D0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UContextualControlWidget* GetDefaultObj();

	void RemoveControlWidget(class FName ControlName);
	void AddControlWidget(class FName ControlName, class FText ControlText, class FName InputActionName);
};

// 0x10 (0x268 - 0x258)
// Class ManeaterUI.ContextualControlWidgetEntry
class UContextualControlWidgetEntry : public UTwBaseWidget
{
public:
	class UTwInputAwareRichTextBlockWidget*      ButtonText;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UContextualControlWidget*              PoolOwner;                                         // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UContextualControlWidgetEntry* GetDefaultObj();

};

// 0x300 (0x598 - 0x298)
// Class ManeaterUI.ControlsSettingsWidget
class UControlsSettingsWidget : public UTwBaseMenuPanel
{
public:
	class UWidgetSwitcher*                       ControllerWidgetSwitcher;                          // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    LayoutStepper;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetSwitcher*                       XboxPadTextureSwitcher;                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            SpecialLeftText;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            LeftTriggerText;                                   // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            LeftShoulderText;                                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            LeftStickClickText;                                // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            LeftStickMoveText;                                 // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            DpadUpText;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            DpadLeftText;                                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            DpadDownText;                                      // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            DpadRightText;                                     // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            SpecialRightText;                                  // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            RightTriggerText;                                  // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            RightShoulderText;                                 // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            FaceButtonTopText;                                 // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            FaceButtonBottomText;                              // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            FaceButtonLeftText;                                // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            FaceButtonRightText;                               // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            RightStickMoveText;                                // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            RightStickClickText;                               // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        SpecialLeftSlot;                                   // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        LeftTriggerSlot;                                   // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        LeftShoulderSlot;                                  // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        LeftStickClickSlot;                                // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        LeftStickMoveSlot;                                 // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        DpadUpSlot;                                        // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        DpadLeftSlot;                                      // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        DpadDownSlot;                                      // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        DpadRightSlot;                                     // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        SpecialRightSlot;                                  // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        RightTriggerSlot;                                  // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        RightShoulderSlot;                                 // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        FaceButtonTopSlot;                                 // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        FaceButtonBottomSlot;                              // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        FaceButtonLeftSlot;                                // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        FaceButtonRightSlot;                               // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        RightStickMoveSlot;                                // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        RightStickClickSlot;                               // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                ControllerImage;                                   // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetSwitcher*                       PS5PadTextureSwitcher;                             // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            SpecialLeftTextPS;                                 // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            LeftTriggerTextPS;                                 // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            LeftShoulderTextPS;                                // 0x3F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            LeftStickClickTextPS;                              // 0x3F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            LeftStickMoveTextPS;                               // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            DpadUpTextPS;                                      // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            DpadLeftTextPS;                                    // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            DpadDownTextPS;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            DpadRightTextPS;                                   // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            SpecialRightTextPS;                                // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            RightTriggerTextPS;                                // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            RightShoulderTextPS;                               // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            FaceButtonTopTextPS;                               // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            FaceButtonBottomTextPS;                            // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            FaceButtonLeftTextPS;                              // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            FaceButtonRightTextPS;                             // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            RightStickMoveTextPS;                              // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            RightStickClickTextPS;                             // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        SpecialLeftSlotPS;                                 // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        LeftTriggerSlotPS;                                 // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        LeftShoulderSlotPS;                                // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        LeftStickClickSlotPS;                              // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        LeftStickMoveSlotPS;                               // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        DpadUpSlotPS;                                      // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        DpadLeftSlotPS;                                    // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        DpadDownSlotPS;                                    // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        DpadRightSlotPS;                                   // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        SpecialRightSlotPS;                                // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        RightTriggerSlotPS;                                // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        RightShoulderSlotPS;                               // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        FaceButtonTopSlotPS;                               // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        FaceButtonBottomSlotPS;                            // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        FaceButtonLeftSlotPS;                              // 0x4E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        FaceButtonRightSlotPS;                             // 0x4E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        RightStickMoveSlotPS;                              // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHorizontalBox*                        RightStickClickSlotPS;                             // 0x4F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                ControllerImagePS;                                 // 0x500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  ResetDefaultKey;                                   // 0x508(0x18)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  ResetDefaultControllerInput;                       // 0x520(0x18)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ResetDefaultModalSubject;                          // 0x538(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  ResetDefaultModalTitle;                            // 0x550(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  ResetDefaultModalYes;                              // 0x568(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  ResetDefaultModalCancel;                           // 0x580(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UControlsSettingsWidget* GetDefaultObj();

	void OnLayoutChanged(int32 Index);
};

// 0x20 (0x2B8 - 0x298)
// Class ManeaterUI.CreditsScreenView
class UCreditsScreenView : public UTwBaseView
{
public:
	class UUserWidget*                           CreditScrollWidget_BP;                             // 0x298(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UME_RadialProgressWidget*              RadialProgressWidget;                              // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_819[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCreditsScreenView* GetDefaultObj();

};

// 0x8 (0x260 - 0x258)
// Class ManeaterUI.CrosshairNavigationWidget
class UCrosshairNavigationWidget : public UTwBaseWidget
{
public:
	TWeakObjectPtr<class UMapMarkerWidget>       FocusedMarker;                                     // 0x258(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCrosshairNavigationWidget* GetDefaultObj();

	void SetFocusedMarker(class UMapMarkerWidget* _MapMarkerWidget);
	void OnFocusedMarkerChanged();
};

// 0x38 (0x290 - 0x258)
// Class ManeaterUI.DamageTextController
class UDamageTextController : public UTwBaseWidget
{
public:
	class UCanvasPanel*                          WidgetContainer;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PoolSize;                                          // 0x260(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DrawDist;                                          // 0x264(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UDamageTextWidget>         DamageTextWidgetClass;                             // 0x268(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UDamageTextWidget*>             WidgetPool;                                        // 0x270(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UDamageTextWidget*>             UsedPool;                                          // 0x280(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDamageTextController* GetDefaultObj();

	void SpawnHealingText(const struct FVector& SpawnPos, float Value);
	void SpawnEvadeText(const struct FVector& SpawnPos);
	void SpawnDamageText(const struct FVector& SpawnPos, float Value, bool bVulnerableVictim, const struct FGameplayTagContainer& AttackGameplayTags);
	void OnPlayerCausedCombatEvent(enum class ECombatEventType CombatEventType, struct FVector& WorldPos, float Amount, bool bVulnerableVictim, struct FGameplayTagContainer& AttackGameplayTags);
};

// 0x90 (0x2E8 - 0x258)
// Class ManeaterUI.DamageTextWidget
class UDamageTextWidget : public UTwBaseWidget
{
public:
	uint8                                        Pad_899[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            DamageText;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ShadowDamage;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            BoneDamage;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            PoisonDamage;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ElectricDamage;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CriticalDamage;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            EvadeText;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                HealthIcon;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          SubCanvas;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Radius;                                            // 0x2B0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LifeTime;                                          // 0x2B4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEasingFunc                       EasingFunc;                                        // 0x2B8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8AC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTwVector2DTweener*                    Tweener;                                           // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDamageTextController*                 Controller;                                        // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8AF[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         AudioEvent;                                        // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UDamageTextWidget* GetDefaultObj();

};

// 0x100 (0x398 - 0x298)
// Class ManeaterUI.DeathView
class UDeathView : public UTwBaseView
{
public:
	class UImage*                                BackgroundImage;                                   // 0x298(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         QuitButton;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         RespawnBtn;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      InAnimation;                                       // 0x2B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OutAnimation;                                      // 0x2B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            DeathText;                                         // 0x2C0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  BossDeathText;                                     // 0x2C8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  ApexDeathText;                                     // 0x2E0(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  DrowningDeathText;                                 // 0x2F8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  WildlifeDeathText;                                 // 0x310(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  BountyHunterDeathText;                             // 0x328(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  GenericDeathText;                                  // 0x340(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FName                                  BossDeathNarration;                                // 0x358(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ApexDeathNarration;                                // 0x360(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  DrowningDeathNarration;                            // 0x368(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  WildlifeDeathNarration;                            // 0x370(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  BountyHunterDeathNarration;                        // 0x378(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  GenericDeathNarration;                             // 0x380(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8E0[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDeathView* GetDefaultObj();

	void OnButtonMouseOver(class UTwBaseButton* MouseOverWidget);
	void OnButtonGainFoucus(class UTwClickableWidget* OnWidgetFocused);
};

// 0x40 (0x298 - 0x258)
// Class ManeaterUI.EnemyHealthWidget
class UEnemyHealthWidget : public UTwBaseWidget
{
public:
	class UProgressBar*                          HealthBar;                                         // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            NameText;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          EnemyLevelNumberContainer;                         // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            LevelNumber;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          HostileFillColor;                                  // 0x278(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          NeutralFillColor;                                  // 0x288(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UEnemyHealthWidget* GetDefaultObj();

};

// 0x18 (0x570 - 0x558)
// Class ManeaterUI.EnemyOverheadWidgetComponent
class UEnemyOverheadWidgetComponent : public UWidgetComponent
{
public:
	TWeakObjectPtr<class AME_Character>          TargetCharacter;                                   // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UEnemyOverheadWidgetContainer> ContainerClass;                                    // 0x560(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_914[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnemyOverheadWidgetComponent* GetDefaultObj();

	class UEnemyOverheadWidgetContainer* GetContainer();
};

// 0x140 (0x3C8 - 0x288)
// Class ManeaterUI.EnemyOverheadWidgetContainer
class UEnemyOverheadWidgetContainer : public UTwScreenSpaceConstrainedWidget
{
public:
	uint8                                        Pad_98E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressBar*                          Arrow;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEnemyHealthWidget*                    HealthWidget;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          RootCanvas;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          OnScreenContainer;                                 // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInvalidationBox*                      Invalidator;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientImage*                  NutrientImage;                                     // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                LockOnIcon;                                        // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                MassDifferentialIndicator;                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            BottomText;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                HealthIcon;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      IdleAnimation;                                     // 0x2E0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      LockAnimation;                                     // 0x2E8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      BlinkAnimation;                                    // 0x2F0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      SimpleQuestIndicatorIdleAnimation;                 // 0x2F8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            MassDiffImage_Lessthan;                            // 0x300(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            MassDiffImage_SignificantlyLessthan;               // 0x308(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            MassDiffImage_Greaterthan;                         // 0x310(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            MassDiffImage_SignificantlyGreaterthan;            // 0x318(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            MassDiffImage_EqualTo;                             // 0x320(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                ObjectiveIndicatorIcon;                            // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                SimpleQuestIndicatorIcon;                          // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          WaypointNumberContainer;                           // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            WaypointDistanceText;                              // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AME_AIController>       TargetController;                                  // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAIThreatAlertState               CurrentAlertState;                                 // 0x350(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9A9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EHunterRank, class UTexture2D*> HunterRankIconMap;                                 // 0x358(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UME_PlayerTargetingSystem> CachedTargetingSystem;                             // 0x3A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEnemyScreenSpaceWidgetContainer*      PoolOwner;                                         // 0x3B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SignificantDifferenceThreshold;                    // 0x3B8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EquivalentThreshold;                               // 0x3BC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9AE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnemyOverheadWidgetContainer* GetDefaultObj();

	void OnViewControllerVisibilityChanged(enum class ESlateVisibility ControllerVisibility);
	void OnThreatStateChanged(enum class EAIThreatAlertState NewAlertState, class AActor* InstigatingActor);
	void OnRelatedObjectiveChanged(enum class EObjectiveType ObjectiveType);
	void OnPawnTakeDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnPawnKilled(class AME_Character* Victim, class AActor* Killer);
	void OnHUDVisiblityChanged(bool bVisible);
	void OnGamePauseStateChanged(bool bPaused);
	void OnCinematicModeChanged(bool bCinematicMode);
	void OnBoatKilled(class AME_VehiclePawn* Victim);
};

// 0x90 (0x2E8 - 0x258)
// Class ManeaterUI.EnemyScreenSpaceWidgetContainer
class UEnemyScreenSpaceWidgetContainer : public UTwBaseWidget
{
public:
	TSubclassOf<class UMED_ObjectiveIndicatorScreenSpaceWidget> ObjectiveIndicatorWidgetClass;                     // 0x258(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        ObjectiveIndicatorPoolSize;                        // 0x260(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9DF[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMED_ObjectiveIndicatorScreenSpaceWidget*> ObjectiveIndicatorWidgetPool;                      // 0x268(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMED_ObjectiveIndicatorScreenSpaceWidget*> ObjectiveIndicatorWidgetUsedPool;                  // 0x278(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          WidgetContainer;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UEnemyOverheadWidgetContainer> EnemyWidgetClass;                                  // 0x290(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UExplosiveIndicatorScreenSpaceWidget> ExplodingBarrelWidgetClass;                        // 0x298(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        EnemyWidgetPoolSize;                               // 0x2A0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        ExplosiveBarrelPoolSize;                           // 0x2A1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9E3[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UEnemyOverheadWidgetContainer*> EnemyWidgetPool;                                   // 0x2A8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UEnemyOverheadWidgetContainer*> EnemyWidgetUsedPool;                               // 0x2B8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UExplosiveIndicatorScreenSpaceWidget*> ExplosiveBarrelWidgetPool;                         // 0x2C8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UExplosiveIndicatorScreenSpaceWidget*> ExplosiveBarrelWidgetUsedPool;                     // 0x2D8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UEnemyScreenSpaceWidgetContainer* GetDefaultObj();

	void UpdateWidgetDangerSense(class AActor* DangerousActor, bool bActive);
	void OnScreenSpaceWidgetRequested(class AActor* Actor);
	void OnRemoveScreenSpaceWidgetRequested(class AActor* Actor);
};

// 0x58 (0x2B0 - 0x258)
// Class ManeaterUI.EnemySuspicionWidget
class UEnemySuspicionWidget : public UTwBaseWidget
{
public:
	struct FLinearColor                          AtEaseColor;                                       // 0x258(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          SuspicionColor;                                    // 0x268(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          ThreatColor;                                       // 0x278(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                ThreatIcon;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      IdleAnimation;                                     // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      PulseAnimation;                                    // 0x298(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OnAlertAnimation;                                  // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9F1[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnemySuspicionWidget* GetDefaultObj();

};

// 0x18 (0x270 - 0x258)
// Class ManeaterUI.EpisodeItemListWidget
class UEpisodeItemListWidget : public UTwBaseWidget
{
public:
	class UTextBlock*                            ItemText;                                          // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                      Complete;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                      CompletedState;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEpisodeItemListWidget* GetDefaultObj();

};

// 0xE8 (0x340 - 0x258)
// Class ManeaterUI.EvolutionAbilityWidget
class UEvolutionAbilityWidget : public UTwBaseWidget
{
public:
	class UImage*                                Glow;                                              // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      Blink;                                             // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      MeterFull;                                         // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          ChargedBarColor;                                   // 0x270(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          ChargedBGColor;                                    // 0x280(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          DefaultBGColor;                                    // 0x290(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          ChargeEndingColor;                                 // 0x2A0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BindDisabledOpacity;                               // 0x2B0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A41[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressBar*                          EvolutionChargeBar;                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwInputAwareRichTextBlockWidget*      EvolutionBindName;                                 // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                EvolutionAbilityIcon;                              // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                EvolutionAbilityIconBg;                            // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          EvolutionCanvasPanel;                              // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      TigerBodyActive;                                   // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A48[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressBar*                          SonarChargeBar;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwInputAwareRichTextBlockWidget*      SonarBindName;                                     // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      SonarFull;                                         // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         SonarFullAkEvent;                                  // 0x308(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A4A[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEvolutionAbilityWidget* GetDefaultObj();

	void OnSonarAbilityActivated(float& Duration);
	void OnSlottedEvolutionChanged(enum class EEvolutionSlot EvolutionSlot, class UME_PlayerEvolution* Evolution);
	void OnEvolutionAbilityActivated(float& Duration);
	void OnCinematicModeChanged(bool bCinematicMode);
	void OnCharacterAttributesChanged();
};

// 0x118 (0x550 - 0x438)
// Class ManeaterUI.EvolutionIconButtonWidget
class UEvolutionIconButtonWidget : public UTwBaseButton
{
public:
	uint8                                        Pad_A8B[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         OnErrorAkEvent;                                    // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         OnUnequipAkEvent;                                  // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         OnDenyEquipAkEvent;                                // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            SlotNameText;                                      // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                RarityColor;                                       // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                SelectedFrameImage;                                // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                SelectedFlashBorder;                               // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                LockedImage;                                       // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                UnlockedImage;                                     // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseWidget*                         EvolutionIconUpgradeFX;                            // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      NewEvolutionAnimation;                             // 0x4B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  SlotName;                                          // 0x4C0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  DLCErrorText;                                      // 0x4D8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class UTexture2D*                            DefaultBackgroundImage;                            // 0x4F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEvolutionSlot                    SlotType;                                          // 0x4F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEvolutionRarity                  EvolutionRarity;                                   // 0x4F9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         SelectedFrameEnabled;                              // 0x4FA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A94[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          InvalidAgeTierColor;                               // 0x4FC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          ValidAgeTierColor;                                 // 0x50C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          NewEvolutionColor;                                 // 0x51C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A99[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEvolutionData                        EvolutionData;                                     // 0x530(0x10)(BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         IsLocked;                                          // 0x540(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         UseCustomFocus;                                    // 0x541(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsEquipped;                                        // 0x542(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A9E[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UEvolutionListWidget*                  ParentListWidget;                                  // 0x548(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UEvolutionIconButtonWidget* GetDefaultObj();

	void PlayUpgradeFX();
	enum class EEvolutionSlot GetSlotType();
	class FText GetSlotName();
	enum class EEvolutionRarity GetRarity();
	bool GetLocked();
	bool GetIsEquipped();
	class UWidget* GetFocusWidgetForNavigation(enum class EUINavigation NavigationDir);
	class FText GetDLCErrorText();
};

// 0xA0 (0x2F8 - 0x258)
// Class ManeaterUI.EvolutionListWidget
class UEvolutionListWidget : public UTwBaseWidget
{
public:
	uint8                                        Pad_AC4[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUniformGridPanel*                     EvolutionList;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TitleText;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         BackBtn;                                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UEvolutionIconButtonWidget> EvolutionListItemWidgetClass;                      // 0x2B0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            EvolutionListItemBackgroundImage;                  // 0x2B8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        EvolutionsPerRow;                                  // 0x2C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEvolutionSlot                    EvolutionSlotFilter;                               // 0x2C4(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AC7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UEvolutionIconButtonWidget*            FocusedInventoryEvolution;                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UScrollBox*                            EvolutionScrollBox;                                // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AC8[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEvolutionListWidget* GetDefaultObj();

	void OnInventoryEvolutionUpgrade_Pressed(class UME_PlayerEvolution* Evolution);
	void OnInventoryEvolution_MouseLeave(class UTwBaseButton* Widget);
	void OnInventoryEvolution_Focused(class UEvolutionIconButtonWidget* IconWidget);
	void OnInventoryEvolution_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnInputDeviceChanged(enum class EUserInputDevice Device);
	void OnBackButton_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
};

// 0x178 (0x410 - 0x298)
// Class ManeaterUI.EvolutionsPanel
class UEvolutionsPanel : public UTwBaseMenuPanel
{
public:
	class UUniformGridPanel*                     SlotContainer;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionIconButtonWidget*            JawSlot;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionIconButtonWidget*            HeadSlot;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionIconButtonWidget*            BodySlot;                                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionIconButtonWidget*            FinSlot;                                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionIconButtonWidget*            TailSlot;                                          // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionIconButtonWidget*            Organ1Slot;                                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionIconButtonWidget*            Organ2Slot;                                        // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionIconButtonWidget*            Organ3Slot;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionIconButtonWidget*            Organ4Slot;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionListWidget*                  EvolutionListWidget;                               // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UEvolutionUpgradeWidget*               EvolutionUpgradeWidget;                            // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      TransitionToList;                                  // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      TransitionToSlots;                                 // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      TransitionToUpgrade;                               // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      TransitionOutOfUpgrade;                            // 0x310(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULevelProgressWidget*                  LevelProgressWidget;                               // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAttributesWidget*                     AttributesWidget;                                  // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                PaperDollImage;                                    // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         OnMenuBackTransitionAkEvent;                       // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         UpgradeTransitionAkEvent;                          // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAgeTierInfographicWidget*             AgeTierInfographic;                                // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTUtorialSinglePopupWidget*            TutorialpopupWidget_BP;                            // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class AME_InventoryActor>        InventoryActorClass;                               // 0x350(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AME_InventoryActor*                    InventoryActor;                                    // 0x358(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B26[0x68];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  SelectDisabledFooterText;                          // 0x3C8(0x18)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	class FText                                  DefaultFooterText;                                 // 0x3E0(0x18)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_B28[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInGameMenuView*                       GameMenuView;                                      // 0x408(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UEvolutionsPanel* GetDefaultObj();

	void ShowTutorialPopupWidget(int32 Index);
	void PlayTransitionToUpgrade();
	void PlayTransitionToSlots();
	void PlayTransitionToList();
	void PlayTransitionOutOfUpgrade();
	void PlayGrowthAnimation();
	void OnSlottedEvolutionChanged(enum class EEvolutionSlot EvolutionSlot, class UME_PlayerEvolution* Evolution);
	void OnSlotButtonWidget_Focused(class UEvolutionIconButtonWidget* IconWidge);
	void OnSlotButtonWidget_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnShark_GrowthStageChanged(enum class EPlayerGrowthStage& OldGrowthStage, enum class EPlayerGrowthStage& NewGrowthStage, bool bReinitPose);
	void OnInventoryEvolutionChanged(class UME_PlayerEvolution* Evolution, bool IsUpgrade);
	void OnControllerDisconnectedModalDismissed();
	void OnAgeTierWidgetDismissed();
	void HandleUpgradeButton_Pressed(class UME_PlayerEvolution* Evolution);
	void HandleEvolutionListItem_Focused(class UEvolutionIconButtonWidget* IconWidget, enum class EEvolutionSlot SlotType);
	void ConstructTooltip(class UME_PlayerEvolution* Evolution, const struct FEvolutionData& EvolutionData, bool HideCost, bool HideUpgrade);
	void CantUseUntilGrottoPopup();
};

// 0x68 (0x2C0 - 0x258)
// Class ManeaterUI.EvolutionUpgradeWidget
class UEvolutionUpgradeWidget : public UTwBaseWidget
{
public:
	uint8                                        Pad_B5B[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            UpgradeCostText1;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            UpgradeCostText2;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientImage*                  NutrientImage1;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientImage*                  NutrientImage2;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         UpgradeButton;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         CancelButton;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      InAnimation;                                       // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OutAnimation;                                      // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UME_PlayerEvolution*                   EvolutionToBeUpgraded;                             // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UEvolutionUpgradeWidget* GetDefaultObj();

	void OnUpgradeButton_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnCancelButton_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void ConstructTooltip(class UME_PlayerEvolution* Evolution, const struct FEvolutionData& EvolutionData, const struct FEvolutionData& UpgradedEvolutionData);
};

// 0x40 (0x2C8 - 0x288)
// Class ManeaterUI.ExplosiveIndicatorScreenSpaceWidget
class UExplosiveIndicatorScreenSpaceWidget : public UTwScreenSpaceConstrainedWidget
{
public:
	class UWidgetAnimation*                      BlinkAnim;                                         // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                Icon;                                              // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinBlinkSpeed;                                     // 0x298(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxBlinkSpeed;                                     // 0x29C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLerpSpeed;                                        // 0x2A0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B7A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SplitPercent;                                      // 0x2A4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B7D[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnemyScreenSpaceWidgetContainer*      PoolOwner;                                         // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UExplosiveIndicatorScreenSpaceWidget* GetDefaultObj();

	void OnViewControllerVisibilityChanged(enum class ESlateVisibility ControllerVisibility);
	void OnHUDVisiblityChanged(bool bVisible);
	void OnGamePauseStateChanged(bool bPaused);
	void OnCinematicModeChanged(bool bCinematicMode);
};

// 0x8 (0x260 - 0x258)
// Class ManeaterUI.FastTravelConfirmationWidget
class UFastTravelConfirmationWidget : public UTwBaseWidget
{
public:
	uint8                                        Pad_B82[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UFastTravelConfirmationWidget* GetDefaultObj();

};

// 0x48 (0x2E0 - 0x298)
// Class ManeaterUI.GameplaySettingsWidget
class UGameplaySettingsWidget : public UTwBaseMenuPanel
{
public:
	class UMESettingsStepper*                    SubtitlesWidget;                                   // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    TUtorialPopupWidget;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    InvertMouseY;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    MouseSensitivity;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    InvertGamepadY;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    RightStickSensitivity;                             // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    VibrationWidget;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    BrightnessStepper;                                 // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    RaytracingWidget;                                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UGameplaySettingsWidget* GetDefaultObj();

	void OnVibrationChanged(int32 Index);
	void OnTutorialPopupChanged(int32 Index);
	void OnSubtitlesChanged(int32 Index);
	void OnSprintChanged(int32 Index);
	void OnRightStickSensitivityChanged(int32 Index);
	void OnRaytracingChanged(int32 Index);
	void OnMouseSensitivityChanged(int32 Index);
	void OnInvertMouseYChanged(int32 Index);
	void OnInvertGamepadYChanged(int32 Index);
};

// 0x20 (0x310 - 0x2F0)
// Class ManeaterUI.GrottoMapMarkerWidget
class UGrottoMapMarkerWidget : public UMapMarkerWidget
{
public:
	TWeakObjectPtr<class AME_Grotto>             OwningGrottoActor;                                 // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FastTravelHoldTime;                                // 0x2F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentFastTravelHoldTime;                         // 0x2FC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         AudioEventFastTravel;                              // 0x300(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BA3[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGrottoMapMarkerWidget* GetDefaultObj();

	void OnMarkerUpdated();
	void FastTravel();
};

// 0x20 (0x278 - 0x258)
// Class ManeaterUI.HUDErrorMessageWidget
class UHUDErrorMessageWidget : public UTwBaseWidget
{
public:
	class UTextBlock*                            ErrorText;                                         // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      InAnimation;                                       // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OutAnimation;                                      // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObjectiveControllerWidget> ObjController;                                     // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UHUDErrorMessageWidget* GetDefaultObj();

};

// 0x90 (0x318 - 0x288)
// Class ManeaterUI.HUDRewardQueueWidget
class UHUDRewardQueueWidget : public UTwWidgetQueue
{
public:
	TSubclassOf<class UHUDRewardWidget>          RewardWidgetClass;                                 // 0x288(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUserWidgetPool                       CurrentWidgetPool;                                 // 0x290(0x80)(Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        MaxWidgetCount;                                    // 0x310(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BAE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHUDRewardQueueWidget* GetDefaultObj();

	void OnWidgetQueueDestruction(class UTwBaseWidget* Widget);
	void OnInventoryEvolutionChanged(class UME_PlayerEvolution* Evolution, bool IsUpgrade);
};

// 0x20 (0x2A8 - 0x288)
// Class ManeaterUI.HUDRewardWidget
class UHUDRewardWidget : public UBaseObjectiveDecorator
{
public:
	class UTextBlock*                            RewardName;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                RewardIcon;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                RarityBG;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerNutrientImage*                  NutrientRewardImage;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UHUDRewardWidget* GetDefaultObj();

};

// 0x38 (0x290 - 0x258)
// Class ManeaterUI.HUDTipInfo
class UHUDTipInfo : public UTwBaseWidget
{
public:
	class UTextBlock*                            HeaderText;                                        // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URichTextBlock*                        BodyText;                                          // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwInputAwareRichTextBlockWidget*      InputText;                                         // 0x268(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentTipTimeOnScreen;                            // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsTipShowing;                                     // 0x274(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BB5[0x1B];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UHUDTipInfo* GetDefaultObj();

	void Disable();
};

// 0x40 (0x478 - 0x438)
// Class ManeaterUI.HunterButtonWidget
class UHunterButtonWidget : public UTwBaseButton
{
public:
	uint8                                        Pad_BB7[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HunterIndex;                                       // 0x448(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsKilled;                                         // 0x44C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsCurrentTarget;                                  // 0x44D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BB9[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            HunterTexture;                                     // 0x450(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                ButtonFrameGlow;                                   // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                CurrentHunterMarker;                               // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                HunterKilled;                                      // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                LockedIcon;                                        // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UHunterButtonWidget* GetDefaultObj();

};

// 0x10 (0x268 - 0x258)
// Class ManeaterUI.HunterSupportIcon
class UHunterSupportIcon : public UTwBaseWidget
{
public:
	class UImage*                                SupportIcon;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SupportName;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UHunterSupportIcon* GetDefaultObj();

};

// 0x60 (0x2B8 - 0x258)
// Class ManeaterUI.InfamyRankUpWidget
class UInfamyRankUpWidget : public UTwBaseWidget
{
public:
	class UImage*                                ImageTarget;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      InAnimation;                                       // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OutAnimation;                                      // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OutRank10Animation;                                // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         RankUpSoundEvent;                                  // 0x278(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            InfamyRankUpText;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                       InfamyWidgetSwitcher;                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class UTexture2D>>     TierTextures;                                      // 0x290(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          RootCanvas;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UObjectiveControllerWidget> ObjController;                                     // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumLevels;                                         // 0x2B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BBF[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInfamyRankUpWidget* GetDefaultObj();

	void OnAnimStart_BP();
	void OnAnimEnd_BP();
};

// 0x78 (0x2D0 - 0x258)
// Class ManeaterUI.InfamyRewardWidget
class UInfamyRewardWidget : public UTwBaseWidget
{
public:
	bool                                         IsComplete;                                        // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BC2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                RewardIcon;                                        // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          RewardPanel;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          NutrientPanel;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          CompletePanel;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            RewardName;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            RewardDescription;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientImage*                  FatRewardImage;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            FatRewardAmountText;                               // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientImage*                  ProteinRewardImage;                                // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ProteinRewardAmountText;                           // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientImage*                  MineralRewardImage;                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            MineralRewardAmountText;                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientImage*                  MutagenRewardImage;                                // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            MutagenRewardAmountText;                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInfamyRewardWidget* GetDefaultObj();

};

// 0x20 (0x278 - 0x258)
// Class ManeaterUI.InfamyTierIcon
class UInfamyTierIcon : public UTwBaseWidget
{
public:
	class UTextBlock*                            LevelText;                                         // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                LockIcon;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      Selected;                                          // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      Deselected;                                        // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInfamyTierIcon* GetDefaultObj();

};

// 0x0 (0x438 - 0x438)
// Class ManeaterUI.InGameMenuButton
class UInGameMenuButton : public UTwBaseButton
{
public:

	static class UClass* StaticClass();
	static class UInGameMenuButton* GetDefaultObj();

};

// 0x10 (0x318 - 0x308)
// Class ManeaterUI.InGameMenuController
class UInGameMenuController : public UTwBaseMenu
{
public:
	class UImage*                                NewQuestNotificationImage;                         // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                NewEvolutionNotificationImage;                     // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UInGameMenuController* GetDefaultObj();

};

// 0x18 (0x2C0 - 0x2A8)
// Class ManeaterUI.InGameMenuView
class UInGameMenuView : public UTwBaseMenuView
{
public:
	class AME_InventoryActor*                    InventoryActor;                                    // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BCC[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInGameMenuView* GetDefaultObj();

	void OpenEvolutionPanel_BP();
	void OnInputDeviceChanged(enum class EUserInputDevice Device);
};

// 0x30 (0x290 - 0x260)
// Class ManeaterUI.InvertedControlsWidget
class UInvertedControlsWidget : public UTwBaseModal
{
public:
	uint8                                        Pad_BD5[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTwBaseButton*                         AcceptButton;                                      // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         InvertButton;                                      // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         UnInvertButton;                                    // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BD6[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UInvertedControlsWidget* GetDefaultObj();

	void OnAnyButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked);
};

// 0x0 (0x360 - 0x360)
// Class ManeaterUI.KeyMappingMultiOptionModal
class UKeyMappingMultiOptionModal : public UTwMultiOptionModal
{
public:

	static class UClass* StaticClass();
	static class UKeyMappingMultiOptionModal* GetDefaultObj();

};

// 0x118 (0x3B0 - 0x298)
// Class ManeaterUI.KeyMappingSettingsWidget
class UKeyMappingSettingsWidget : public UTwBaseMenuPanel
{
public:
	class UKeyMappingWidget*                     MoveForwardWidget;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                     MoveLeftWidget;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                     MoveBackwardWidget;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                     MoveRightWidget;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                     BiteWidget;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                     TailwhipWidget;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                     EvadeLeftWidget;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                     EvadeRightWidget;                                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                     EvadeUpWidget;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                     EvadeDownWidget;                                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                     LungeWidget;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                     ActivateEvolutionWidget;                           // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                     MapMenuWidget;                                     // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                     InfamyMenuWidget;                                  // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                     EvolutionsMenuWidget;                              // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                     SonarWidget;                                       // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UKeyMappingWidget*                     FocusThreatWidget;                                 // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  ResetDefaultKey;                                   // 0x320(0x18)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  ResetDefaultControllerInput;                       // 0x338(0x18)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ResetDefaultModalSubject;                          // 0x350(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  ResetDefaultModalTitle;                            // 0x368(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  ResetDefaultModalYes;                              // 0x380(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  ResetDefaultModalCancel;                           // 0x398(0x18)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UKeyMappingSettingsWidget* GetDefaultObj();

	void RedrawKeybinds();
};

// 0x108 (0x540 - 0x438)
// Class ManeaterUI.KeyMappingWidget
class UKeyMappingWidget : public UTwBaseButton
{
public:
	uint8                                        Pad_BEB[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            SettingsLabel;                                     // 0x448(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwInputAwareRichTextBlockWidget*      SelectedSettingsLabel;                             // 0x450(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  SettingName;                                       // 0x458(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  BindFormatting;                                    // 0x470(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  EmptyBindText;                                     // 0x488(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FName                                  SettingActionName;                                 // 0x4A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        SettingAxisScale;                                  // 0x4A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  SettingDefaultKey;                                 // 0x4B0(0x18)(Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftClassPtr<class UKeyMappingMultiOptionModal> KeyMappingMultiOptionModalAssetRef;                // 0x4C8(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  KeyModalTitle;                                     // 0x4F0(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  KeyModalSubject;                                   // 0x508(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  KeyModalCancel;                                    // 0x520(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF7[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UKeyMappingWidget* GetDefaultObj();

};

// 0x8 (0x2F8 - 0x2F0)
// Class ManeaterUI.LandmarkMapMarkerWidget
class ULandmarkMapMarkerWidget : public UMapMarkerWidget
{
public:
	TWeakObjectPtr<class AActor>                 OwningWorldLandmarkActor;                          // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ULandmarkMapMarkerWidget* GetDefaultObj();

	void OnMarkerUpdated();
};

// 0x90 (0x2E8 - 0x258)
// Class ManeaterUI.LevelProgressWidget
class ULevelProgressWidget : public UTwBaseWidget
{
public:
	class UTextBlock*                            AgeTierText;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            LevelText;                                         // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          PercentToNextLevelBar;                             // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          DeltaBar;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInvalidationBox*                      Invalidator;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwFloatTweener*                       ValueTweener;                                      // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            VisitGrottoText;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            FightPeteText;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          LevelUpImageContainer;                             // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      MessageLoop;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                       NutrientWidgetSwitcher;                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ShowText;                                          // 0x2B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ShowGrottoText;                                    // 0x2B1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ShouldFadeOut;                                     // 0x2B2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         ShowNutrientText;                                  // 0x2B3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C37[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTwUMGOpacityTweener*                  CachedOpacityTween;                                // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OpacityInTweenTime;                                // 0x2D0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VisibleTime;                                       // 0x2D4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OpacityOutTweenTime;                               // 0x2D8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        IdleOpactity;                                      // 0x2DC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEasingFunc                       OpacityInEaseFunc;                                 // 0x2E0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEasingFunc                       OpacityOutEaseFunc;                                // 0x2E1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C3A[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULevelProgressWidget* GetDefaultObj();

	void UpdateProgress();
	void OnTweenStep(class UTwTweener* Tweener);
	void OnShark_LevelChanged(int32 NewLevel, bool bChangeFromTheoretical);
	void OnShark_GrowthStageAvailable(enum class EPlayerGrowthStage& OldGrowthStage, enum class EPlayerGrowthStage& NewGrowthStage, bool bReinitPose);
	void OnShark_GrowthLevelChanged(enum class EPlayerGrowthStage& OldGrowthStage, enum class EPlayerGrowthStage& NewGrowthStage, bool bReinitPose);
	void OnShark_ExperienceGained(int32 ExperienceGained);
	void OnOpacityTweenStep(class UTwTweener* Tweener);
	void OnOpacityOutFinished(class UTwTweener* Tweener);
	void OnOpacityInFinished(class UTwTweener* Tweener);
	void OnLifetimeEnded();
};

// 0x110 (0x548 - 0x438)
// Class ManeaterUI.LoadGameButtonWidget
class ULoadGameButtonWidget : public UTwBaseButton
{
public:
	int32                                        SaveSlotIndex;                                     // 0x438(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C46[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSaveSlotDeleted;                                 // 0x450(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint32                                       EmptyPadding;                                      // 0x460(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C47[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetSwitcher*                       FrameSwitcher;                                     // 0x468(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            EmptySlotNameText;                                 // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SlotNameText;                                      // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            DateTimeText;                                      // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CurrentRegionText;                                 // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            PlayerLevelText;                                   // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TimePlayedText;                                    // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                SaveImage;                                         // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                NewGameMap;                                        // 0x4A8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  DeleteSaveKey;                                     // 0x4B8(0x18)(Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  DeleteSaveControllerInput;                         // 0x4D0(0x18)(Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  DeleteSaveModalSubject;                            // 0x4E8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  DeleteSaveModalTitle;                              // 0x500(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  DeleteSaveModalYes;                                // 0x518(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  DeleteSaveModalCancel;                             // 0x530(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class ULoadGameButtonWidget* GetDefaultObj();

	void SetProfileData(class FText SlotName, const struct FDateTime& SaveTime, class FText CurrentRegion, class FText PlayerLevel, class FText TimePlayed, class UTexture2D* SaveImage);
	void SetIsEmpty(bool Empty);
	void LoadGame();
};

// 0x70 (0x2C8 - 0x258)
// Class ManeaterUI.MacroObjectiveMeterWidget
class UMacroObjectiveMeterWidget : public UTwBaseWidget
{
public:
	class UTwFloatTweener*                       RegionTweener;                                     // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwFloatTweener*                       GameTweener;                                       // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwUMGOpacityTweener*                  OpacityTweener;                                    // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ObjectiveVisibleDuration;                          // 0x270(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEasingFunc                       EasingFunc;                                        // 0x274(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C6F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressBar*                          RegionBar;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          RegionBarBg;                                       // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            RegionPctText;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          GameBar;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          GameBarBg;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            RegionNameText;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                RegionImage;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        PoisonWarning;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C75[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMacroObjectiveMeterWidget* GetDefaultObj();

	void UpdateMeters(class FText RegionName, class UTexture2D* RegionIcon, bool bIsRegionPoisoned, float OldRegionPerc, float NewRegionPerc, float OldGamePerc, float NewGamePerc);
	void PostCompleteDelay();
	void OnRegionStepEvent(class UTwTweener* Tweener);
	void OnRegionCompleteEvent(class UTwTweener* Tweener);
	void OnOpacityFadeOutComplete(class UTwTweener* Tweener);
	void OnOpacityFadeInComplete(class UTwTweener* Tweener);
	void OnGameStepEvent(class UTwTweener* Tweener);
};

// 0x0 (0x358 - 0x358)
// Class ManeaterUI.ManeaterBaseHUD
class AManeaterBaseHUD : public ATwHUD
{
public:

	static class UClass* StaticClass();
	static class AManeaterBaseHUD* GetDefaultObj();

};

// 0x8 (0x2B8 - 0x2B0)
// Class ManeaterUI.ManeaterBaseViewController
class UManeaterBaseViewController : public UTwViewController
{
public:
	uint8                                        Pad_C80[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UManeaterBaseViewController* GetDefaultObj();

	void OnInputDeviceChanged(enum class EUserInputDevice Device);
};

// 0x10 (0x2A8 - 0x298)
// Class ManeaterUI.ManeaterCinematicView
class UManeaterCinematicView : public UTwBaseView
{
public:
	class UME_RadialProgressWidget*              RadialProgressWidget;                              // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C84[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UManeaterCinematicView* GetDefaultObj();

	void StopCredits();
};

// 0x0 (0x308 - 0x308)
// Class ManeaterUI.ManeaterCinematicViewController
class UManeaterCinematicViewController : public UTwBaseMenu
{
public:

	static class UClass* StaticClass();
	static class UManeaterCinematicViewController* GetDefaultObj();

};

// 0x4D0 (0x828 - 0x358)
// Class ManeaterUI.ManeaterHUD
class AManeaterHUD : public AManeaterBaseHUD
{
public:
	FMulticastInlineDelegateProperty_            OnPlayerSkippedCinematic;                          // 0x358(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayerDamaged;                                   // 0x368(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNutrientsChanged;                                // 0x378(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNutrientGained;                                  // 0x388(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRegionChanged;                                   // 0x398(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCharacterAbilityTriggered;                       // 0x3A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GameplayTagAdded;                                  // 0x3B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            GameplayTagRemoved;                                // 0x3C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimeDilationEventDelegate;                       // 0x3D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayerMovementModeChangedDelegate;               // 0x3E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnScreenSpaceWidgetRequested;                      // 0x3F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRemoveScreenSpaceWidgetRequested;                // 0x408(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnGamePauseStateChanged;                           // 0x418(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayerCausedCombatEvent;                         // 0x428(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnObjectiveCompleteEvent;                          // 0x438(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnStoryEventProgressEvent;                         // 0x448(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAdvancedToNextEpisodeEvent;                      // 0x458(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBossFightAvailableEvent;                         // 0x468(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBountyBossSpawnedEvent;                          // 0x478(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLandmarkObjectFoundEvent;                        // 0x488(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnObjectiveStartedEvent;                           // 0x498(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnObjectiveUpdatedEvent;                           // 0x4A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnObjectiveDiscoveredEvent;                        // 0x4B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnObjectiveTrackEvent;                             // 0x4C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnObjectiveStateChangedEvent;                      // 0x4D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNewQuestAvailableChangedEvent;                   // 0x4E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnHUDErrorMessageEvent;                            // 0x4F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBasicTooltipRequestedEvent;                      // 0x508(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayerKnifingStateChanged;                       // 0x518(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAICombatStatusChangedEvent;                      // 0x528(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnThrashUIChangedEvent;                            // 0x538(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayerLevelChanged;                              // 0x548(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimeTrialBegin;                                  // 0x558(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimeTrialEnd;                                    // 0x568(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimeTrialTimeTick;                               // 0x578(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTimeTrialOnRingPassed;                           // 0x588(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBountyPlacedOnHoldEvent;                         // 0x598(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D60[0x1D8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnStoryCompletePopupDismissed;                     // 0x780(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FTimerHandle                          DeathScreenTimerHandle;                            // 0x790(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UManeaterHUDView>          HUDViewClass;                                      // 0x798(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AME_PlayerSharkCharacter*              OwnerCharacter;                                    // 0x7A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UDeathView>                DeathViewClass;                                    // 0x7A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UManeaterCinematicView>    ManeaterCinematicViewClass;                        // 0x7B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCreditsScreenView>        CreditsScreenViewClass;                            // 0x7B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D62[0x68];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AManeaterHUD* GetDefaultObj();

	void TutorialPopupDismissed();
	void ToggleSpeedometer();
	void TimeTrialTick(float Time);
	void TimeTrialProgress(int32 RingProgress, int32 RingTotal);
	void TimeTrialEnd();
	void TimeTrialBegin();
	void ThreatAdded();
	void StoryCompleteWidgetDismissed();
	void ShowTutorialSinglePopupWidget(int32 Index, int32 PageCount);
	void ShowStoryCompletePopup();
	void ShowRegionToast(struct FRegionToastData& Data);
	void ShowInvertedControlsPopup();
	void ShowDevSettings();
	void ShowBasicTooltip(class FText Header, class FText Body, class FText InputText, float Duration);
	void SetPlayerWaypoint(const struct FVector2D& Pos);
	void SetDeathScreenEnabled(bool bEnabled);
	void RemoveContextualControlPrompt(class FName ControlName);
	void PushDeathView();
	void PushDeathScreen(class AActor* DamageCauser);
	void PushCreditsScreen();
	void PushCinematicView();
	void PopCinematicView();
	void PlayerKnifingStateChanged(bool bIsKnifing, enum class ECharacterActionMode ChangeContext);
	void PlayerInfamyRankUp(int32 Rank);
	void PauseGame();
	void OnZeroOutStats();
	void OnTimeDilationEvent(bool bStarted, enum class ECharacterActionMode ActionMode);
	void OnThrashUIChanged(bool bShow, bool bPlayerSharkThrashed);
	void OnStoryEventProgress(int32 CurrentStoryIndex, class FText ConditionText, float StoryProgress);
	void OnSonarUntarget(class AActor* NewTarget);
	void OnSonarTarget(class AActor* NewTarget);
	void OnSonarRefreshTarget(class AActor* NewTarget);
	void OnSonarAbilityActivated(float& Duration);
	void OnPlayerTookDamage(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnPlayerThrash();
	void OnPlayerStruggle();
	void OnPlayerRegionChanged(enum class EWorldRegion Region, class UTexture2D* RegionIcon);
	void OnPlayerNutrientGained(enum class ENutrientType NutrientType, int32 NutrientGain, bool bFromObjective);
	void OnPlayerMovementModeChanged(class AME_PlayerSharkCharacter* PlayerShark, enum class EMovementMode OldMovementMode, enum class EMovementMode NewMovementMode);
	void OnObjectiveUpdated(class UME_PlayerObjective* PlayerObjective);
	void OnObjectiveTrack(class UME_PlayerObjective* PlayerObjective, bool bShouldTrack, bool bNoTrackerUpdate);
	void OnObjectiveStateChanged(class UME_PlayerObjective* Objective, enum class EObjectiveState NewState);
	void OnObjectiveStarted(class UME_PlayerObjective* PlayerObjective);
	void OnObjectiveDiscovered(class UME_PlayerObjective* PlayerObjective);
	void OnObjectiveComplete(class UME_PlayerObjective* PlayerObjective);
	void OnNewSoftTarget(class AActor* NewTarget);
	void OnNewRelevantTarget(class AActor* NewTarget);
	void OnNewQuestAvailableChanged();
	void OnLevelChanged(int32 GrowthLevel, bool bChangeFromTheoretical);
	void OnLandmarkObjectFound(class UME_PlayerObjective* PlayerObjective, class FText LandmarkDescription);
	void OnHudTipRequested(struct FME_TutorialTipEvent& ME_TutorialEvent);
	void OnHUDErrorMessage(class FText& ErrorMessage);
	void OnGameplayTagRemoved(const struct FGameplayTagContainer& TagsRemoved);
	void OnGameplayTagAdded(const struct FGameplayTagContainer& TagsAdded, float TagDuration);
	void OnEvolutionAbilityActivated(float& Duration);
	void OnDangerSenseUpdated(class AActor* DangerousActor, bool bActive);
	void OnCharacterAttributesChanged();
	void OnBountyPlacedOnHold();
	void OnBountyBossSpawned(struct FBountyViewData& BountyData);
	void OnBossFightAvailable(class UME_PlayerObjectiveBoss* BossObjective);
	void OnAICombatStatusChanged(bool bInCombat, class AME_AIController* AIActor);
	void OnAdvancedToNextEpisode(int32 CurrentStoryEventIndex, int32 CurrentEpisodeNumber);
	void OnAbilityTriggered(enum class EME_CharacterAbility CharacterAbilityEnum, const struct FGameplayTag& AbilityTag);
	void InvertedControlsPopupDismissed();
	class UTwBaseWidget* GetTutorialModal();
	class UManeaterHUDViewController* GetHUDViewController();
	void EnableCinematicMode();
	void DisableCinematicMode();
	void ClearPlayerWaypoint();
	void BountyEnding();
	void BountyBeginning();
	void AddContextualControlPrompt(class FName ControlName, class FText ButtonText, class FName InputActionName);
};

// 0x60 (0x2F8 - 0x298)
// Class ManeaterUI.ManeaterHUDPauseMenuView
class UManeaterHUDPauseMenuView : public UTwBaseView
{
public:
	class UTwBaseButton*                         QuitButton;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         MainMenu;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         Settings;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  QuitModalAccept;                                   // 0x2B0(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  QuitModalCancel;                                   // 0x2C8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  QuitModalSubtext;                                  // 0x2E0(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UManeaterHUDPauseMenuView* GetDefaultObj();

	void OnQuit_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnButtonMouseOver(class UTwBaseButton* MouseOverWidget);
	void OnButtonGainFoucus(class UTwClickableWidget* OnWidgetFocused);
};

// 0xF8 (0x390 - 0x298)
// Class ManeaterUI.ManeaterHUDView
class UManeaterHUDView : public UTwBaseView
{
public:
	uint8                                        Pad_D83[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               SavingThrobber;                                    // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               Speedometer;                                       // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        SavingBox;                                         // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHUDTipInfo*                           HudTipInfoWidget;                                  // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTutorialInfoWidget*                   TutorialInfoWidget;                                // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D85[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInvertedControlsWidget*               InvertedControlsWidget;                            // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D86[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UTUtorialSinglePopupWidget> TutorialSinglePopupWidgetClass;                    // 0x2E8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UInvertedControlsWidget>   InvertedControlsWidgetClass;                       // 0x2F0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UStoryCompleteWidget>      StoryCompleteWidgetClass;                          // 0x2F8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UObjectiveMapMarkerWidget> ObjectiveWidgetClass;                              // 0x300(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ObjectiveWidgetPoolSize;                           // 0x308(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D88[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUserWidgetPool                       ObjectiveWidgetPool;                               // 0x310(0x80)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UManeaterHUDView* GetDefaultObj();

	void TutorialSinglePopupDismissed();
	void StoryCompleteWidgetDismissed();
	class UTwBaseWidget* ShowTutorialSinglePopupWidget(int32 Index, int32 PageCount);
	class UStoryCompleteWidget* ShowStoryCompleteWidget();
	void ShowSavingIcon();
	class UInvertedControlsWidget* ShowInvertedControlsWidget();
	void InvertedControlsPopupDismissed();
	void HideSavingIcon();
};

// 0x10 (0x2C8 - 0x2B8)
// Class ManeaterUI.ManeaterHUDViewController
class UManeaterHUDViewController : public UManeaterBaseViewController
{
public:
	bool                                         bDisablePause;                                     // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D8B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UManeaterHUDPauseMenuView> PauseViewClass;                                    // 0x2C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UManeaterHUDViewController* GetDefaultObj();

};

// 0x140 (0x3D8 - 0x298)
// Class ManeaterUI.ManeaterMapPanel
class UManeaterMapPanel : public UTwBaseMenuPanel
{
public:
	uint8                                        Pad_D97[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UFastTravelConfirmationWidget> FastTravelConfirmationWidgetClass;                 // 0x2A0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWorldMapWidget*                       WorldMapWidget;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCrosshairNavigationWidget*            CrosshairNavigationWidget;                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMapMarkerPopupWidget*                 MapMarkerPopupWidget;                              // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UUserWidget*                           PoisonWaterMessage;                                // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMapProgressWidget*                    CurrentRegionProgressWidget;                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWorldRegion                      CurrentFocusedRegion;                              // 0x2D0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D98[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRegionData>                   Regions;                                           // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MapToRealWorldScale;                               // 0x2E8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         RegionMapInFocus;                                  // 0x2EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D99[0x2F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MapScrollSpeed;                                    // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        GamepadMapZoomSpeed;                               // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MouseScrollingScale;                               // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MouseZoomingScale;                                 // 0x328(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D9A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  PlayAudioGamepadKey;                               // 0x330(0x18)(Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  PlayAudioKeyboardKey;                              // 0x348(0x18)(Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  TrackObjectiveGamepadKey;                          // 0x360(0x18)(Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  TrackObjectiveKeyboardKey;                         // 0x378(0x18)(Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTUtorialSinglePopupWidget*            TutorialSimplePopupWidget;                         // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      LegendIn;                                          // 0x398(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      LegendOut;                                         // 0x3A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D9E[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         TrackObjectiveAudioEvent;                          // 0x3B8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         UntrackObjectiveAudioEvent;                        // 0x3C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         OnToggleCompletedQuestsAkEvent;                    // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOverlay*                              PopupOverlay;                                      // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UManeaterMapPanel* GetDefaultObj();

	void OnTutorialPopupWidgetDismissed();
	void OnRegionDataLoaded();
	void OnObjectiveTrack(class UME_PlayerObjective* PlayerObjective, bool bShouldTrack, bool bNoTrackerUpdate);
	void OnNewPlayerWaypointSet(const struct FVector2D& Pos);
	void OnControllerDisconnectedModalDismissed();
};

// 0x0 (0x2B8 - 0x2B8)
// Class ManeaterUI.ManeaterModalViewController
class UManeaterModalViewController : public UManeaterBaseViewController
{
public:

	static class UClass* StaticClass();
	static class UManeaterModalViewController* GetDefaultObj();

};

// 0x70 (0x308 - 0x298)
// Class ManeaterUI.ManeaterSaveTransferView
class UManeaterSaveTransferView : public UTwBaseView
{
public:
	FMulticastInlineDelegateProperty_            OnSaveTransferCompleted;                           // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UWidgetSwitcher*                       SaveDtataTransferStateSwitcher;                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         ContinueButton;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         CancelButton;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinWaitTime;                                       // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DB1[0x44];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UManeaterSaveTransferView* GetDefaultObj();

	void SetUpEvents(class UManeaterTitleMenuView* View);
	void SaveDataMounted(const TArray<uint8>& SaveDataSlot0, const TArray<uint8>& SaveDataSlot1, const TArray<uint8>& SaveDataSlot2);
	void OnContinue_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnCancel_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
};

// 0x10 (0x2B8 - 0x2A8)
// Class ManeaterUI.ManeaterSettingsMenuView
class UManeaterSettingsMenuView : public UTwBaseMenuView
{
public:
	class UTextBlock*                            ChangeListText;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               SavingThrobber;                                    // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UManeaterSettingsMenuView* GetDefaultObj();

	void ShowSavingIcon();
	void HideSavingIcon();
};

// 0x8 (0x360 - 0x358)
// Class ManeaterUI.ManeaterTitleMenuHUD
class AManeaterTitleMenuHUD : public AManeaterBaseHUD
{
public:
	TSubclassOf<class UManeaterTitleSplashView>  TitleSplashViewClass;                              // 0x358(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AManeaterTitleMenuHUD* GetDefaultObj();

};

// 0x150 (0x3E8 - 0x298)
// Class ManeaterUI.ManeaterTitleMenuView
class UManeaterTitleMenuView : public UTwBaseView
{
public:
	class UWidget*                               SavingThrobber;                                    // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      SaveSlotsIn;                                       // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      SaveSlotsOut;                                      // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                       SaveSlotSwitcher;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULoadGameButtonWidget*                 LoadSlot1Button;                                   // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULoadGameButtonWidget*                 LoadSlot2Button;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULoadGameButtonWidget*                 LoadSlot3Button;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         ContinueGameButton;                                // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         PlayGameButton;                                    // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         SettingsButton;                                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         ExitButton;                                        // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          ExitPanel;                                         // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         DLCButton;                                         // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetSwitcher*                       TitleLogoSwitcher;                                 // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      FadeMenuIn;                                        // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      FadeMenuOut;                                       // 0x310(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         BackButton;                                        // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DFD[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  QuitModalAccept;                                   // 0x340(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  QuitModalCancel;                                   // 0x358(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  QuitModalSubtext;                                  // 0x370(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class UTwBaseView>               SettingsView;                                      // 0x388(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UTwBaseView>               StatsView;                                         // 0x390(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                NewGameMap;                                        // 0x398(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UME_SaveGameObject*>            CachedSaveGames;                                   // 0x3A8(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMED_SaveData_DLC01*>           CachedSaveDLC01Data;                               // 0x3B8(0x10)(ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UTwBaseView>               SaveDataTransferView;                              // 0x3C8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        AfterPartyStoryIndex;                              // 0x3D0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DLC01MapFinishedIndex;                             // 0x3D4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E01[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         OnNavigateBackAkEvent;                             // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UManeaterTitleMenuView* GetDefaultObj();

	void ShowSavingIcon();
	void RecacheSaveGames();
	class UMED_SaveData_DLC01* PeekSaveGameDLC01(int32 SlotIndex);
	class UME_SaveGameObject* PeekSaveGame(int32 SlotIndex);
	void OnSettings_MouseEnter(class UTwBaseButton* Widget);
	void OnSettings_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnPlayGame_Focused(class UTwClickableWidget* Widget);
	void OnPlayGame_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnMenuButton_FocusLost(class UTwClickableWidget* Widget);
	void OnInputDeviceChanged(enum class EUserInputDevice Device);
	void OnExit_MouseEnter(class UTwBaseButton* Widget);
	void OnExit_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnDLCStatusChanged(bool bIsDLCOwned);
	void OnDLCButton_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnContinueGame_Focused(class UTwClickableWidget* Widget);
	void OnContinueGame_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnContinueButton_MouseLeave(class UTwBaseButton* Widget);
	void OnContinueButton_MouseEnter(class UTwBaseButton* Widget);
	void OnBackButton_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void HideSavingIcon();
	void HandleDLCEntitlementInitialized(enum class EDLCType DLCType, bool bEnabled);
	void HandleDLCEntitlementChanged(enum class EDLCType DLCType, bool bEnabled);
	struct FME_StoryInfo GetStoryProgressInfo(int32 SlotIndex);
	bool DoesSaveGameExist(int32 SlotIndex);
	void ContinueGame_BP();
};

// 0x8 (0x2C0 - 0x2B8)
// Class ManeaterUI.ManeaterTitleMenuViewController
class UManeaterTitleMenuViewController : public UManeaterBaseViewController
{
public:
	class UTextBlock*                            ActiveUserID;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UManeaterTitleMenuViewController* GetDefaultObj();

};

// 0x38 (0x2D0 - 0x298)
// Class ManeaterUI.ManeaterTitleSplashView
class UManeaterTitleSplashView : public UTwBaseView
{
public:
	class URichTextBlock*                        ProfileText;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         StartButton;                                       // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UManeaterTitleMenuView>    TitleMenuClass;                                    // 0x2A8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         OnSplashClosingAkEvent;                            // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E10[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UManeaterTitleSplashView* GetDefaultObj();

	void OnStartButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked);
};

// 0x0 (0x28 - 0x28)
// Class ManeaterUI.ManeaterUIFunctionLibrary
class UManeaterUIFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UManeaterUIFunctionLibrary* GetDefaultObj();

	bool IsKeyValidForUpgrade(struct FKey& Key);
	class FText GetTextForKeybind(class FName& ActionName, bool bGamepad, int32 IconSize, int32 IconOffset, float AxisScale);
	bool GetShouldDisplayAttributeAsPercentage(const class FString& AttributeName);
	class FText GetReadableNameForAttribute(const class FString& AttributeName);
	struct FLinearColor GetNutrientColor(enum class ENutrientType Nutrient);
	class AManeaterHUD* GetManeaterHUD(class UObject* WorldContextObject);
	class FText GetLocalizedSlotName(enum class EEvolutionSlot Slot);
	class FText GetLocalizedRarityName(enum class EEvolutionRarity Rarity);
	class FText GetLocalizedGrowthName(enum class EPlayerGrowthStage GrowthStage);
	class FText GetLocalizedEvolutionProcName(enum class EEvolutionProcType ProcType);
	class FText GetLocalizedDLCName(enum class EDLCType DLCType);
	bool GetIsDisplayAttributeMultiplier(const class FString& AttributeName);
	class UTexture2D* GetIconForObjectiveType(enum class EObjectiveType ObjectiveType, bool bStoryObjective, bool bCompleted);
	class UTexture2D* GetIconForMarkerType(enum class EMarkerType MarkerType);
	struct FLinearColor GetEvolutionColor(enum class EEvolutionRarity Rarity);
	class UTexture2D* GetEpisodeImage(int32 StoryIndex);
};

// 0x1C8 (0x200 - 0x38)
// Class ManeaterUI.ManeaterUISettings
class UManeaterUISettings : public UDeveloperSettings
{
public:
	TSoftClassPtr<class UTwMultiOptionModal>     DLCPurchaseModalAssetRef;                          // 0x38(0x28)(Edit, Config, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UTexture2D>>     EpisodeImages;                                     // 0x60(0x10)(Edit, ZeroConstructor, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMapSettings                          MapSettings;                                       // 0x70(0xA0)(Edit, Config, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UDataTable>             DisplayStatLookupDataTable;                        // 0x110(0x28)(Edit, Config, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EEvolutionRarity, struct FLinearColor> RarityToColorMap;                                  // 0x138(0x50)(Edit, Config, NativeAccessSpecifierPublic)
	TMap<enum class ENutrientType, struct FLinearColor> NutrientTypeToColorMap;                            // 0x188(0x50)(Edit, Config, NativeAccessSpecifierPublic)
	class FText                                  InputTextFormat;                                   // 0x1D8(0x18)(Edit, Config, NativeAccessSpecifierPublic)
	TArray<struct FKey>                          RestrictedKeys;                                    // 0x1F0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UManeaterUISettings* GetDefaultObj();

};

// 0xD8 (0x330 - 0x258)
// Class ManeaterUI.MapMarkerPopupWidget
class UMapMarkerPopupWidget : public UTwBaseWidget
{
public:
	struct FVector2D                             RightOfCenterPos;                                  // 0x258(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LeftOfCenterPos;                                   // 0x260(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            QuestTitleText;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                QuestImage;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            DefaultQuestImage;                                 // 0x278(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            QuestDescriptionText;                              // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SubtitleText;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ShortObjectiveText;                                // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            QuestProgressText;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        AudioLog;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInfamyRewardWidget*                   ObjectiveRewards;                                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            QuestTypeText;                                     // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UMapMarkerWidget>       FocusedMarker;                                     // 0x2B8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ErrorText;                                         // 0x2C0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwInputAwareRichTextBlockWidget*      FastTravelRTB;                                     // 0x2C8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  InCombatErrorText;                                 // 0x2D0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  AlreadyAtGrottoErrorText;                          // 0x2E8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  ObjectiveInProgressErrorText;                      // 0x300(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	class FText                                  CannotUseTeleporterFastTravelText;                 // 0x318(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMapMarkerPopupWidget* GetDefaultObj();

	void SetObjectiveData(class UME_PlayerObjective* Objective);
	void OnHoveredMapMarkerWidgetUpdated();
	void HandleInput(const struct FKey& Key);
};

// 0xA0 (0x4D8 - 0x438)
// Class ManeaterUI.MapProgressButtonWidget
class UMapProgressButtonWidget : public UTwBaseButton
{
public:
	uint8                                        Pad_E88[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            IconTexture;                                       // 0x458(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  SectionName;                                       // 0x460(0x18)(Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	class FText                                  DefaultActionName;                                 // 0x478(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class FText                                  SelectedActionName;                                // 0x490(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	int32                                        WidgetSwitcherIndex;                               // 0x4A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         DisplayProgress;                                   // 0x4AC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFocused;                                          // 0x4AD(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDisableActionContainer;                           // 0x4AE(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E8B[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            SectionText;                                       // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ActionText;                                        // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                SectionIconImage;                                  // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          SectionProgressBar;                                // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          ClickActionContainer;                              // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMapProgressButtonWidget* GetDefaultObj();

	void ToggleFocus();
	void SetWidgetSwitcherIndex(int32 Index);
	void SetShowProgress(bool Show);
	void SetSectionTexture(class UTexture2D* Texture);
	void SetSectionName(class FText Name);
	void SetProgress(float Progress);
	void SetActionContainerDisabled(bool Disable);
	bool IsFocused();
	int32 GetWidgetSwitcherIndex();
};

// 0x80 (0x2D8 - 0x258)
// Class ManeaterUI.MapProgressWidget
class UMapProgressWidget : public UTwBaseWidget
{
public:
	class UTexture2D*                            IconTexture;                                       // 0x258(0x8)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  SectionName;                                       // 0x260(0x18)(Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	class UTextBlock*                            SectionText;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            LandmarkProgressText;                              // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            NutrientCacheProgressText;                         // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CollectableProgressText;                           // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        LandmarkContainer;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        NutrientCacheContainer;                            // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        CollectableContainer;                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                SectionIconImage;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          SectionProgressBar;                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SectionPercentage;                                 // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TinFoilHatProgressText;                            // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        TinFoilHatContainer;                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMapProgressWidget* GetDefaultObj();

	void SetTinFoilHatProgress(class FText Progress);
	void SetSectionTexture(class UTexture2D* Texture);
	void SetSectionName(class FText Name);
	void SetProgress(float Progress);
	void SetNutrientCacheProgress(class FText Progress);
	void SetLandmarkProgress(class FText Progress);
	void SetCollectibleProgress(class FText Progress);
};

// 0x50 (0x2A8 - 0x258)
// Class ManeaterUI.MapWidget
class UMapWidget : public UTwBaseWidget
{
public:
	class UCanvasPanel*                          MapContainerCanvas;                                // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          MapCanvasPanel;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UScaleBox*                             MapScaleBox;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                MapImage;                                          // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             FocalTarget;                                       // 0x278(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FocusInterpSpeed;                                  // 0x280(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MapZoomSpeed;                                      // 0x284(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinZoomLevel;                                      // 0x288(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxZoomLevel;                                      // 0x28C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TransitionZoomLevel;                               // 0x290(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MapScale;                                          // 0x294(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EA5[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UCanvasPanelSlot>       MapContainerCanvasSlot;                            // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMapWidget* GetDefaultObj();

};

// 0x10 (0x268 - 0x258)
// Class ManeaterUI.ME_CinematicMovieWidget
class UME_CinematicMovieWidget : public UTwBaseWidget
{
public:
	class UME_RadialProgressWidget*              RadialProgressWidget;                              // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                          MediaSource;                                       // 0x260(0x8)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UME_CinematicMovieWidget* GetDefaultObj();

	void SetMediaSource(class UMediaSource* InMovie);
	void OnMediaSourceSet();
	class UMediaSource* GetMediaSourceForPlatform();
};

// 0x10 (0x268 - 0x258)
// Class ManeaterUI.ME_RadialProgressWidget
class UME_RadialProgressWidget : public UTwBaseWidget
{
public:
	class UImage*                                HoldProgressImage;                                 // 0x258(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EAD[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UME_RadialProgressWidget* GetDefaultObj();

};

// 0x18 (0x270 - 0x258)
// Class ManeaterUI.METoastWidget
class UMEToastWidget : public UTwBaseWidget
{
public:
	float                                        Duration;                                          // 0x258(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UObjectiveControllerWidget> ObjController;                                     // 0x25C(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EAF[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMEToastWidget* GetDefaultObj();

	void RemoveToast();
	void OnToastShowing();
	void OnToastReadyForRemove();
};

// 0x8 (0x278 - 0x270)
// Class ManeaterUI.MEApexSpawnToast
class UMEApexSpawnToast : public UMEToastWidget
{
public:
	class UTextBlock*                            ApexNameText;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMEApexSpawnToast* GetDefaultObj();

};

// 0x10 (0x278 - 0x268)
// Class ManeaterUI.MEControllerDisconnectedModal
class UMEControllerDisconnectedModal : public UTwControllerDisconnectedModal
{
public:
	uint8                                        Pad_EB0[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMEControllerDisconnectedModal* GetDefaultObj();

};

// 0x48 (0x2D0 - 0x288)
// Class ManeaterUI.MED_ObjectiveIndicatorScreenSpaceWidget
class UMED_ObjectiveIndicatorScreenSpaceWidget : public UTwScreenSpaceConstrainedWidget
{
public:
	TSoftObjectPtr<class UTexture2D>             TimeTrialIcon;                                     // 0x288(0x28)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                Icon;                                              // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          ArrowContainer;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EB4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UEnemyScreenSpaceWidgetContainer*      PoolOwner;                                         // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMED_ObjectiveIndicatorScreenSpaceWidget* GetDefaultObj();

	void OnHUDVisiblityChanged(bool bVisible);
	void OnGamePauseStateChanged(bool bPaused);
	void OnCinematicModeChanged(bool bCinematicMode);
};

// 0x10 (0x280 - 0x270)
// Class ManeaterUI.MELevelUpToast
class UMELevelUpToast : public UMEToastWidget
{
public:
	class UTextBlock*                            HeaderText;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         AudioEventLevelUp;                                 // 0x278(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMELevelUpToast* GetDefaultObj();

};

// 0x18 (0x288 - 0x270)
// Class ManeaterUI.MENewEpisodeToast
class UMENewEpisodeToast : public UMEToastWidget
{
public:
	class UTextBlock*                            EpisodeTitleText;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            EpisodeNumberText;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         AudioEventNewEpisode;                              // 0x280(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMENewEpisodeToast* GetDefaultObj();

};

// 0x50 (0x2C0 - 0x270)
// Class ManeaterUI.MERegionToast
class UMERegionToast : public UMEToastWidget
{
public:
	class UTextBlock*                            HeaderText;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            RegionText;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            RegionProgressText;                                // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                RegionImage;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  DiscoveredText;                                    // 0x290(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  EnteringText;                                      // 0x2A8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMERegionToast* GetDefaultObj();

};

// 0x60 (0x498 - 0x438)
// Class ManeaterUI.MESettingsStepper
class UMESettingsStepper : public UTwBaseButton
{
public:
	FMulticastInlineDelegateProperty_            OnStepperValueChanged;                             // 0x438(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UTextBlock*                            SettingsLabel;                                     // 0x448(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SelectedSettingsLabel;                             // 0x450(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         PrevButton;                                        // 0x458(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         NextButton;                                        // 0x460(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FText>                          OptionsList;                                       // 0x468(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  SettingName;                                       // 0x478(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_ECC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMESettingsStepper* GetDefaultObj();

	void SetSelectedOption(int32 Idx, bool bTriggerBroadcast);
	void SetOptions(const TArray<class FText>& Options);
	void PreviousOption();
	void OnPrevClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked);
	void OnNextClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked);
	void NextOption();
	int32 GetSelectedOption();
	TArray<class FText> GetOptions();
};

// 0x40 (0x2B0 - 0x270)
// Class ManeaterUI.MEStoryProgressToast
class UMEStoryProgressToast : public UMEToastWidget
{
public:
	TArray<class UTexture2D*>                    EpisodeTextures;                                   // 0x270(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                CurrentEpisodeImage;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                NextEpisodeImage;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          EpisodeProgressBar;                                // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            EpisodeTitleText;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            EpisodeListItemText;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         AudioEventStoryProgress;                           // 0x2A8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMEStoryProgressToast* GetDefaultObj();

};

// 0x0 (0x268 - 0x268)
// Class ManeaterUI.METooltipContainer
class UMETooltipContainer : public UTwTooltipContainer
{
public:

	static class UClass* StaticClass();
	static class UMETooltipContainer* GetDefaultObj();

};

// 0x0 (0x258 - 0x258)
// Class ManeaterUI.NotorietyMeterWidget
class UNotorietyMeterWidget : public UTwBaseWidget
{
public:

	static class UClass* StaticClass();
	static class UNotorietyMeterWidget* GetDefaultObj();

};

// 0x90 (0x4C8 - 0x438)
// Class ManeaterUI.ObjectiveButtonWidget
class UObjectiveButtonWidget : public UTwBaseButton
{
public:
	uint8                                        Pad_EFF[0x48];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UME_PlayerObjective*                   ObjectiveData;                                     // 0x480(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ObjectiveNameText;                                 // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                ObjectiveIcon;                                     // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                TrackIcon;                                         // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CompletedTextOpacity;                              // 0x4A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        NormalTextOpacity;                                 // 0x4A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          CompletedImageColor;                               // 0x4A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          NormalImageColor;                                  // 0x4B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UObjectiveButtonWidget* GetDefaultObj();

	void OnObjectiveTrack(class UME_PlayerObjective* Objective, bool bShouldTrack, bool bNoTrackerUpdate);
	class UWidget* GetFocusWidgetForNavigation(enum class EUINavigation NavigationDir);
};

// 0x70 (0x2C8 - 0x258)
// Class ManeaterUI.ObjectiveCollectionWidget
class UObjectiveCollectionWidget : public UTwBaseWidget
{
public:
	uint8                                        Pad_F15[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBox*                          ObjectiveList;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TitleText;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UObjectiveButtonWidget>    ObjectiveButtonWidgetClass;                        // 0x288(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  StoryTitleText;                                    // 0x290(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	class UObjectiveButtonWidget*                FocusedObjective;                                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        FocusedObjectiveIndex;                             // 0x2B0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F17[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UObjectiveCollectionWidget* GetDefaultObj();

	void SetFocusedObjective(class UObjectiveButtonWidget* ObjectiveButton);
	void OnObjective_MouseEnter(class UObjectiveButtonWidget* ObjectiveButton);
	void OnObjective_Focused(class UObjectiveButtonWidget* ObjectiveButton);
};

// 0x100 (0x388 - 0x288)
// Class ManeaterUI.ObjectiveCompletionDecorator
class UObjectiveCompletionDecorator : public UBaseObjectiveDecorator
{
public:
	class UTextBlock*                            LocationText;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ObjectiveText;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CompletedText;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                ObjectiveIcon;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         CompleteAkEvent;                                   // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         TutorialCompleteAkEvent;                           // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         BossFightAvailableAkEvent;                         // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  DefaultCompletedText;                              // 0x2C0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  TutorialCompletedText;                             // 0x2D8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UTexture2D*                            TutorialCompletedIcon;                             // 0x2F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F1C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  RegionCompletedText;                               // 0x300(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_F1D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  GameCompletedTitleText;                            // 0x320(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  GameCompletedText;                                 // 0x338(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UTexture2D*                            GameCompletedIcon;                                 // 0x350(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F1E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  BossFightText;                                     // 0x360(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UTexture2D*                            BossFightIcon;                                     // 0x378(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F1F[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UObjectiveCompletionDecorator* GetDefaultObj();

};

// 0x1C0 (0x418 - 0x258)
// Class ManeaterUI.ObjectiveControllerWidget
class UObjectiveControllerWidget : public UTwBaseWidget
{
public:
	float                                        NewQuestDuration;                                  // 0x258(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F5F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EObjectiveType, TSubclassOf<class UBaseObjectiveDecorator>> IncrementalObjectiveDecoratorMap;                  // 0x260(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TMap<enum class EObjectiveType, TSubclassOf<class UBaseObjectiveDecorator>> CenterProgressObjectiveDecoratorMap;               // 0x2B0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TSubclassOf<class UBaseObjectiveDecorator>   CompletionObjectiveDecorator;                      // 0x300(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UObjectiveDiscoveredDecorator> DiscoveredObjectiveDecorator;                      // 0x308(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UObjectiveTrackDecorator>  TrackObjectiveDecorator;                           // 0x310(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UMERegionToast>            RegionToastClass;                                  // 0x318(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UMELevelUpToast>           LevelUpToastClass;                                 // 0x320(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UMEStoryProgressToast>     StoryProgressToastClass;                           // 0x328(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UMENewEpisodeToast>        NewEpisodeToastClass;                              // 0x330(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UInfamyRankUpWidget>       InfamyRankUpClass;                                 // 0x338(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UBaseObjectiveDecorator>   BountyOnHoldClass;                                 // 0x340(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UMEApexSpawnToast>         ApexSpawnToastClass;                               // 0x348(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UHUDErrorMessageWidget>    HUDErrorMessageClass;                              // 0x350(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMacroObjectiveMeterWidget*            MacroObjectiveWidget;                              // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObjectiveDecoratorQueueWidget*        IncrementalQueue;                                  // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObjectiveDecoratorQueueWidget*        CenterQueue;                                       // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObjectiveDecoratorQueueWidget*        TopQueue;                                          // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObjectiveTrackerQueueWidget*          DiscoveredQueue;                                   // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseWidget*                         NewQuestNotificationWidget;                        // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F64[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUserWidgetPool                       ToastWidgetPool;                                   // 0x398(0x80)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UObjectiveControllerWidget* GetDefaultObj();

	void TutorialFinished();
	void OnToastDestroyed(class UTwBaseWidget* Widget);
	void OnStoryEventProgress(int32 CurrentStoryIndex, class FText ConditionText, float StoryProgress);
	void OnRegionChanged(const struct FRegionToastData& Data);
	void OnObjectiveUpdated(class UME_PlayerObjective* Objective);
	void OnObjectiveTrack(class UME_PlayerObjective* Objective, bool bShouldTrack, bool bNoTrackerUpdate);
	void OnObjectiveStateChanged(class UME_PlayerObjective* PlayerObjective, enum class EObjectiveState NewState);
	void OnObjectiveStarted(class UME_PlayerObjective* Objective);
	void OnObjectiveDiscovered(class UME_PlayerObjective* Objective);
	void OnObjectiveComplete(class UME_PlayerObjective* Objective);
	void OnNewQuestAvailableChanged();
	void OnLevelChanged(int32 NewGrowthLevel, bool bChangeFromTheoretical);
	void OnLandmarkRegionComplete(class UME_PlayerObjective* Objective);
	void OnLandmarkObjectFound(class UME_PlayerObjective* Objective, class FText LandmarkDescription);
	void OnInfamyRankUp(int32 NewRank);
	void OnHUDErrorMessage(class FText& ErrorMessage);
	void OnBountyPlacedOnHold();
	void OnBountyBossSpawned(struct FBountyViewData& BountyData);
	void OnBossFightAvailable(class UME_PlayerObjectiveBoss* BossObjective);
	void OnAdvancedToNextEpisode(int32 CurrentStoryEventIndex, int32 CurrentEpisodeNumber);
};

// 0x0 (0x288 - 0x288)
// Class ManeaterUI.ObjectiveDecoratorQueueWidget
class UObjectiveDecoratorQueueWidget : public UTwWidgetQueue
{
public:

	static class UClass* StaticClass();
	static class UObjectiveDecoratorQueueWidget* GetDefaultObj();

};

// 0x10 (0x298 - 0x288)
// Class ManeaterUI.ObjectiveDiscoveredDecorator
class UObjectiveDiscoveredDecorator : public UBaseObjectiveDecorator
{
public:
	class UTextBlock*                            ObjectiveNameText;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                QuestIcon;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UObjectiveDiscoveredDecorator* GetDefaultObj();

};

// 0x30 (0x320 - 0x2F0)
// Class ManeaterUI.ObjectiveMapMarkerWidget
class UObjectiveMapMarkerWidget : public UMapMarkerWidget
{
public:
	TWeakObjectPtr<class UME_PlayerObjective>    OwningPlayerObjective;                             // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EObjectiveState                   ObjectiveState;                                    // 0x2F8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F77[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ObjectiveIndex;                                    // 0x2FC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UScaleBox*                             MarkerScale;                                       // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                TrackedState;                                      // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          InProgressColor;                                   // 0x310(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UObjectiveMapMarkerWidget* GetDefaultObj();

	void OnObjectiveTrack(class UME_PlayerObjective* PlayerObjective, bool bShouldTrack, bool bNoTrackerUpdate);
};

// 0xF0 (0x378 - 0x288)
// Class ManeaterUI.ObjectiveProgressDecorator
class UObjectiveProgressDecorator : public UBaseObjectiveDecorator
{
public:
	class UTextBlock*                            MainText;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SubtitleText;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                ObjectiveIcon;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<enum class EObjectiveType, class FText> ObjectiveMainTextMap;                              // 0x2A0(0x50)(Edit, Protected, NativeAccessSpecifierProtected)
	TMap<enum class EObjectiveType, class FText> ObjectiveSubtitleTextMap;                          // 0x2F0(0x50)(Edit, Protected, NativeAccessSpecifierProtected)
	class UTexture2D*                            ScalyPeteTexture;                                  // 0x340(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  HunterSubtitleText;                                // 0x348(0x18)(Edit, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_F7B[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         LandmarkFoundAkEvent;                              // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F7C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UObjectiveProgressDecorator* GetDefaultObj();

};

// 0x38 (0x2C0 - 0x288)
// Class ManeaterUI.ObjectiveTrackDecorator
class UObjectiveTrackDecorator : public UBaseObjectiveDecorator
{
public:
	class UTextBlock*                            QuestTitle;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            QuestProgress;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            QuestDescription;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                QuestIcon;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      ProgressUpdate;                                    // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      QuestComplete;                                     // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F81[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UObjectiveTrackDecorator* GetDefaultObj();

};

// 0x0 (0x310 - 0x310)
// Class ManeaterUI.ObjectiveTrackerQueueWidget
class UObjectiveTrackerQueueWidget : public UTwMultiWidgetQueue
{
public:

	static class UClass* StaticClass();
	static class UObjectiveTrackerQueueWidget* GetDefaultObj();

};

// 0x0 (0x258 - 0x258)
// Class ManeaterUI.OverheadAgroWidget
class UOverheadAgroWidget : public UTwBaseWidget
{
public:

	static class UClass* StaticClass();
	static class UOverheadAgroWidget* GetDefaultObj();

};

// 0x20 (0x2A8 - 0x288)
// Class ManeaterUI.PercentageUpdateDecorator
class UPercentageUpdateDecorator : public UBaseObjectiveDecorator
{
public:
	class UTextBlock*                            Progress;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                IconImage;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         ObjectiveCompleteAkEvent;                          // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         NutrientCacheOpenedAkEvent;                        // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPercentageUpdateDecorator* GetDefaultObj();

};

// 0x78 (0x2D0 - 0x258)
// Class ManeaterUI.PlayerAbilitiesWidget
class UPlayerAbilitiesWidget : public UTwBaseWidget
{
public:
	class UPlayerAbilityInstanceWidget*          LeftAbility;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerAbilityInstanceWidget*          RightAbility;                                      // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerAbilityInstanceWidget*          TopAbility;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerAbilityInstanceWidget*          BottomAbility;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<enum class EAbilitySlot, class UPlayerAbilityInstanceWidget*> AbilitySlotMap;                                    // 0x278(0x50)(BlueprintVisible, ExportObject, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_F92[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlayerAbilitiesWidget* GetDefaultObj();

	void SetHealth(float Health);
	void SetCooldownForAbilitySlot(enum class EAbilitySlot AbilitySlot, float Cooldown);
	void SetCharges(float Charges);
	void SetBoost(float Boost);
};

// 0x80 (0x2D8 - 0x258)
// Class ManeaterUI.PlayerAbilityInstanceWidget
class UPlayerAbilityInstanceWidget : public UTwBaseWidget
{
public:
	enum class EAbilitySlot                      AbilitySlot;                                       // 0x258(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F98[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    Material;                                          // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                AbilityImage;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                AbilityIcon;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            CooldownText;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UMaterialInterface>     TopBottomMat;                                      // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UMaterialInterface>     LeftMat;                                           // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UMaterialInterface>     RightMat;                                          // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              MatDynamic;                                        // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        IconCooldownOpacity;                               // 0x2A0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          AbilityCooldownColorActive;                        // 0x2A4(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          AbilityCooldownColorReady;                         // 0x2B4(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F9E[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlayerAbilityInstanceWidget* GetDefaultObj();

};

// 0x0 (0x258 - 0x258)
// Class ManeaterUI.PlayerEvolutionContainer
class UPlayerEvolutionContainer : public UTwBaseWidget
{
public:

	static class UClass* StaticClass();
	static class UPlayerEvolutionContainer* GetDefaultObj();

};

// 0x68 (0x2C0 - 0x258)
// Class ManeaterUI.PlayerHealthBarWidget
class UPlayerHealthBarWidget : public UTwBaseWidget
{
public:
	class UProgressBar*                          ProgressBar;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          DeltaBar;                                          // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UProgressBar*                          BreathBar;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          BreathCanvas;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwFloatTweener*                       ValueTweener;                                      // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        TweenDuration;                                     // 0x280(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FAE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetAnimation*                      LightAttackAnim;                                   // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      HeavyAttackAnim;                                   // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      Suffocating;                                       // 0x298(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      BreathBarOn;                                       // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      BreathBarOff;                                      // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInvalidationBox*                      Invalidator;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        HeavyHitPercentage;                                // 0x2B8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FB0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlayerHealthBarWidget* GetDefaultObj();

	void SetRemainingBreath(float& RemainingBreath);
	void SetHealthValue(float Value);
	void OnTweenStep(class UTwTweener* Tweener);
	void OnRemainingBreathChanged_BP(float NewValue);
	void OnHealthValueChanged_BP(float NewValue);
};

// 0x10 (0x268 - 0x258)
// Class ManeaterUI.PlayerInfoWidget
class UPlayerInfoWidget : public UTwBaseWidget
{
public:
	class UPlayerHealthBarWidget*                HealthWidget;                                      // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                PoisonDebuff;                                      // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPlayerInfoWidget* GetDefaultObj();

	void OnStoryUpdated(int32 ActiveStoryIndex);
	void OnRegionChanged(const struct FRegionToastData& Data);
	void OnPlayerHealthValueChanged(float& Delta);
	void OnPlayerDamaged(float Damage, class AController* InstigatedBy, class AActor* DamageCauser);
};

// 0x58 (0x268 - 0x210)
// Class ManeaterUI.PlayerNutrientImage
class UPlayerNutrientImage : public UImage
{
public:
	enum class ENutrientType                     NutrientType;                                      // 0x210(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FC0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class ENutrientType, class UTexture2D*> NutrientDictionary;                                // 0x218(0x50)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPlayerNutrientImage* GetDefaultObj();

	void SetNutrientType(enum class ENutrientType Nutrient);
};

// 0x68 (0x2C0 - 0x258)
// Class ManeaterUI.PlayerNutrientInstanceIcon
class UPlayerNutrientInstanceIcon : public UTwBaseWidget
{
public:
	uint8                                        Pad_FC6[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            IncreaseText;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ValueText;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientImage*                  NutrientImage;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ENutrientType                     NutrientType;                                      // 0x290(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FCA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTwFloatTweener*                       CachedValueTweener;                                // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwUMGOpacityTweener*                  CachedOpacityTweener;                              // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        IncreaseOpacityInTime;                             // 0x2A8(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        IncreaseOpacityOutTime;                            // 0x2AC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ValueIncreaseTime;                                 // 0x2B0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEasingFunc                       IncreaseInEasingFunc;                              // 0x2B4(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEasingFunc                       IncreaseOutEasingFunc;                             // 0x2B5(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEasingFunc                       ValueIncreaseEasingFunc;                           // 0x2B6(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FCE[0x9];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlayerNutrientInstanceIcon* GetDefaultObj();

	void OnTweenStep(class UTwTweener* Tweener);
	void OnTweenFinished(class UTwTweener* Tweener);
	void OnFadeOutFinished(class UTwTweener* Tweener);
};

// 0x60 (0x2B8 - 0x258)
// Class ManeaterUI.PlayerNutrientWidget
class UPlayerNutrientWidget : public UTwBaseWidget
{
public:
	class UPlayerNutrientInstanceIcon*           ProteinIcon;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientInstanceIcon*           FatIcon;                                           // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientInstanceIcon*           MineralIcon;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerNutrientInstanceIcon*           MutagenIcon;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FDF[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTwUMGOpacityTweener*                  CachedOpacityTween;                                // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OpacityInTweenTime;                                // 0x290(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        VisibleTime;                                       // 0x294(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        OpacityOutTweenTime;                               // 0x298(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEasingFunc                       OpacityInEaseFunc;                                 // 0x29C(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EEasingFunc                       OpacityOutEaseFunc;                                // 0x29D(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FE2[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         StartNutrientTickAkEvent;                          // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         StoptNutrientTickAkEvent;                          // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         IsPlayingNutrientSfx;                              // 0x2B0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FE3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UPlayerNutrientWidget* GetDefaultObj();

	void OnZeroOutStats();
	void OnTweenStarted();
	void OnTweenFinished();
	void OnPlayerNutrientGained(enum class ENutrientType NutrientType, int32 NutrientGain, bool bFromObjective);
	void OnOpacityOutFinished(class UTwTweener* Tweener);
	void OnOpacityInFinished(class UTwTweener* Tweener);
	void OnNutrientsSpent(enum class ENutrientType NutrientType, int32 NutrientSpent);
	void OnLifetimeEnded();
};

// 0x0 (0x258 - 0x258)
// Class ManeaterUI.PlayerSkillContainer
class UPlayerSkillContainer : public UTwBaseWidget
{
public:

	static class UClass* StaticClass();
	static class UPlayerSkillContainer* GetDefaultObj();

};

// 0x0 (0x258 - 0x258)
// Class ManeaterUI.PlayerSkillWIdget
class UPlayerSkillWIdget : public UTwBaseWidget
{
public:

	static class UClass* StaticClass();
	static class UPlayerSkillWIdget* GetDefaultObj();

};

// 0x28 (0x318 - 0x2F0)
// Class ManeaterUI.PlayerWaypointMapMarkerWidget
class UPlayerWaypointMapMarkerWidget : public UMapMarkerWidget
{
public:
	TSoftObjectPtr<class UTexture2D>             LeaderIcon;                                        // 0x2F0(0x28)(Edit, DisableEditOnInstance, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UPlayerWaypointMapMarkerWidget* GetDefaultObj();

};

// 0x190 (0x428 - 0x298)
// Class ManeaterUI.QuestLogPanel
class UQuestLogPanel : public UTwBaseMenuPanel
{
public:
	class UHorizontalBox*                        RegionFilter;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UTwBaseButton>             RegionFilterButtonWidgetClass;                     // 0x2A0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          ObjectiveCollectionsList;                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVerticalBox*                          EpisodeItemList;                                   // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UObjectiveCollectionWidget> ObjectiveCollectionWidgetClass;                    // 0x2B8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UEpisodeItemListWidget>    EpisodeListItemWidgetClass;                        // 0x2C0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          CenterPanel;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UScrollBox*                            ObjectiveScrollBox;                                // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            QuestTitleText;                                    // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                QuestImage;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            DefaultQuestImage;                                 // 0x2E8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            StoryRegionImage;                                  // 0x2F0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            QuestDescriptionText;                              // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            SubtitleText;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ShortObjectiveText;                                // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            QuestProgressText;                                 // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            EpisodeTitleText;                                  // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UHorizontalBox*                        AudioLog;                                          // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInfamyRewardWidget*                   ObjectiveRewards;                                  // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAwarenessWidget*                      AwarenessWidget;                                   // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            QuestTypeText;                                     // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FString, class UObjectiveCollectionWidget*> ObjectiveCollections;                              // 0x340(0x50)(BlueprintVisible, ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TMap<class FString, class UTwBaseButton*>    RegionFilterButtons;                               // 0x390(0x50)(BlueprintVisible, ExportObject, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         CurrentFilterButton;                               // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UObjectiveButtonWidget*                CurrentObjectiveWidget;                            // 0x3E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  PlayAudioGamepadKey;                               // 0x3F0(0x18)(Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  PlayAudioKeyboardKey;                              // 0x408(0x18)(Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         OnToggleCompletedQuestsAkEvent;                    // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UQuestLogPanel* GetDefaultObj();

	void SetRegionFilterButton(class UTwBaseButton* RegionFilterButton);
	void PopulateObjectiveData();
	void OnRegionFilter_Clicked(const struct FKey& Button, class UTwClickableWidget* Widget);
	void OnObjectiveCollection_FocusOOB(class UObjectiveCollectionWidget* ObjectiveCollectionWidget, enum class EUINavigation NavigationDir);
	void OnObjectiveCollection_FocusChanged(class UObjectiveButtonWidget* ObjectiveWidget);
	void OnControllerDisconnectedModalDismissed();
};

// 0x0 (0x258 - 0x258)
// Class ManeaterUI.QuestStatusHUDWidget
class UQuestStatusHUDWidget : public UTwBaseWidget
{
public:

	static class UClass* StaticClass();
	static class UQuestStatusHUDWidget* GetDefaultObj();

};

// 0x0 (0x258 - 0x258)
// Class ManeaterUI.RegionHUDWidget
class URegionHUDWidget : public UTwBaseWidget
{
public:

	static class UClass* StaticClass();
	static class URegionHUDWidget* GetDefaultObj();

};

// 0x40 (0x298 - 0x258)
// Class ManeaterUI.RegionInfoListEntry
class URegionInfoListEntry : public UTwBaseWidget
{
public:
	class FText                                  Entry;                                             // 0x258(0x18)(Edit, DisableEditOnTemplate, Protected, NativeAccessSpecifierProtected)
	float                                        UncheckedAlpha;                                    // 0x270(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UImage*                                Checkmark;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                SelectedImage;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            EntryName;                                         // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF2[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URegionInfoListEntry* GetDefaultObj();

};

// 0x180 (0x3D8 - 0x258)
// Class ManeaterUI.RegionInfoWidget
class URegionInfoWidget : public UTwBaseWidget
{
public:
	bool                                         ViewingRegionMap;                                  // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             WorldMapPosition;                                  // 0x25C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRegionData                           RegionData;                                        // 0x268(0x110)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	float                                        MapScale;                                          // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FF9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             RegionBoundsTexture;                               // 0x380(0x28)(Edit, BlueprintVisible, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UTexture2D>             PoisonBoundsTexture;                               // 0x3A8(0x28)(Edit, BlueprintVisible, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsZoomed;                                         // 0x3D0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_FFA[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class URegionInfoWidget* GetDefaultObj();

	void SetRegionData(const struct FRegionData& NewRegionData);
	void SetCurrentlyHovered(bool bCurrentlyHovered);
	void OnRegionDataUpdated();
	class FText GetRegionName();
	enum class EWorldRegion GetRegion();
};

// 0x10 (0x268 - 0x258)
// Class ManeaterUI.RegionObjectiveProgressWidget
class URegionObjectiveProgressWidget : public UTwBaseWidget
{
public:
	class UProgressBar*                          ObjectiveProgress;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ProgressLabel;                                     // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URegionObjectiveProgressWidget* GetDefaultObj();

};

// 0x18 (0x270 - 0x258)
// Class ManeaterUI.RegionProgressWidget
class URegionProgressWidget : public UTwBaseWidget
{
public:
	class UProgressBar*                          RegionProgress;                                    // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            RegionName;                                        // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            RegionPercentage;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class URegionProgressWidget* GetDefaultObj();

};

// 0x10 (0x4A8 - 0x498)
// Class ManeaterUI.ResolutionSettingsStepper
class UResolutionSettingsStepper : public UMESettingsStepper
{
public:
	TArray<struct FResolutionValue>              ResolutionOptions;                                 // 0x498(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UResolutionSettingsStepper* GetDefaultObj();

};

// 0x20 (0x278 - 0x258)
// Class ManeaterUI.ResourceListWidget
class UResourceListWidget : public UTwBaseWidget
{
public:
	class UTextBlock*                            ProtienCountText;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            FatCountText;                                      // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            MineralCountText;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            MutagenCountText;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UResourceListWidget* GetDefaultObj();

	void UpdateResources();
	void OnNutrientsSpent(enum class ENutrientType NutrientType, int32 NutrientSpent);
};

// 0xC8 (0x500 - 0x438)
// Class ManeaterUI.SaveSlotSelectWidget
class USaveSlotSelectWidget : public UTwBaseButton
{
public:
	uint8                                        Pad_1009[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextBlock*                            ProfileName;                                       // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         LeftButton;                                        // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwBaseButton*                         RightButton;                                       // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         OnSubClickAkEvent;                                 // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_100A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKey                                  DeleteSaveKey;                                     // 0x470(0x18)(Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  DeleteSaveControllerInput;                         // 0x488(0x18)(Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  DeleteSaveModalSubject;                            // 0x4A0(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  DeleteSaveModalTitle;                              // 0x4B8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  DeleteSaveModalYes;                                // 0x4D0(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  DeleteSaveModalCancel;                             // 0x4E8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USaveSlotSelectWidget* GetDefaultObj();

	void SetSaveSlotIdx(int32 Idx);
	void OnRightButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked);
	void OnLeftButtonClicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* WidgetClicked);
	void IncrementSaveSlot();
	void DecrementSaveSlot();
};

// 0x8 (0x310 - 0x308)
// Class ManeaterUI.SettingsMenuController
class USettingsMenuController : public UTwBaseMenu
{
public:
	uint8                                        Pad_100C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USettingsMenuController* GetDefaultObj();

};

// 0xA8 (0x308 - 0x260)
// Class ManeaterUI.StoryCompleteWidget
class UStoryCompleteWidget : public UTwBaseModal
{
public:
	uint8                                        Pad_1010[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetSwitcher*                       WidgetSwitcher_0;                                  // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseButton*                         ME_BaseButton_BP;                                  // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseButton*                         StoryContinue;                                     // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                         PlayerLevel;                                       // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                         EvolutionsFound;                                   // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                         InfamyRank;                                        // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                         TimePlayed;                                        // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                         CrawfishBayCompletion;                             // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                         FawtickBayouCompletion;                            // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                         DeadHorseLakeCompletion;                           // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                         GoldenShoresCompletion;                            // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                         CaviarKeyCompletion;                               // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                         ProsperitySandsCompletion;                         // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                         SapphireBayCompletion;                             // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseWidget*                         TheGulfCompletion;                                 // 0x2E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                      Background_IntroAnim;                              // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                      Congrats_IntroAnim;                                // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetAnimation*                      EndgameStats_IntroAnim;                            // 0x2F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         AudioEvent;                                        // 0x300(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UStoryCompleteWidget* GetDefaultObj();

	void OnDismissStatsButton_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked);
	void OnDismissCongratsButton_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked);
};

// 0x10 (0x268 - 0x258)
// Class ManeaterUI.SubtitleTextWidget
class USubtitleTextWidget : public UTwBaseWidget
{
public:
	class UTextBlock*                            SubtitleTextBlock;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBorder*                               SubtitleBorder;                                    // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USubtitleTextWidget* GetDefaultObj();

	void OnSubtitleTextUpdated(class FText& SubtitleText);
};

// 0x30 (0x320 - 0x2F0)
// Class ManeaterUI.TeleporterMapMarkerWidget
class UTeleporterMapMarkerWidget : public UMapMarkerWidget
{
public:
	TWeakObjectPtr<class AMED_Teleporter>        OwningTeleporterActor;                             // 0x2F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        FastTravelHoldTime;                                // 0x2F8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CurrentFastTravelHoldTime;                         // 0x2FC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         AudioEventFastTravel;                              // 0x300(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                QuestImage;                                        // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      QuestAlertAnimation;                               // 0x310(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_101A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTeleporterMapMarkerWidget* GetDefaultObj();

};

// 0x8 (0x260 - 0x258)
// Class ManeaterUI.ThrashingControlsWidget
class UThrashingControlsWidget : public UTwBaseWidget
{
public:
	class UWidgetAnimation*                      ThrashLoop;                                        // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UThrashingControlsWidget* GetDefaultObj();

};

// 0xC0 (0x318 - 0x258)
// Class ManeaterUI.ThrashingWidget
class UThrashingWidget : public UTwBaseWidget
{
public:
	uint8                                        Pad_101E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          LowColor;                                          // 0x25C(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          MediumColor;                                       // 0x26C(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          HighColor;                                         // 0x27C(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1021[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UProgressBar*                          ProgressBar;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCanvasPanel*                          BarPanel;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UThrashingControlsWidget*              ThrashingControlsWidget;                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                TopJaw;                                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UImage*                                BottomJaw;                                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            ActionText;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      InAnimation;                                       // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OutAnimation;                                      // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      ThrashPulseAnimation;                              // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  ThrashText;                                        // 0x2D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  BreakFreeText;                                     // 0x2F0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FTimerHandle                          ThrashEnableTimerHandle;                           // 0x308(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        ThrashEnableDelay;                                 // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1024[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UThrashingWidget* GetDefaultObj();

	void OnUpdateThrashUI(bool bShow, bool bPlayerSharkThrashed);
	void OnThrashPulse();
	void EnableThrashUI(bool bPlayerSharkThrashed);
};

// 0x30 (0x288 - 0x258)
// Class ManeaterUI.TimeTrialWidget
class UTimeTrialWidget : public UTwBaseWidget
{
public:
	class UTextBlock*                            TimeTrialTimeTextBlock;                            // 0x258(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TimeTrialProgressTextBlock;                        // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      ShowWidget;                                        // 0x268(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      HideWidget;                                        // 0x270(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      TimeUpdated;                                       // 0x278(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      TimesUp;                                           // 0x280(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UTimeTrialWidget* GetDefaultObj();

	void TimeTrialTick(float Time);
	void TimeTrialStart();
	void TimeTrialRingPassed(int32 CurrentRing, int32 TotalRing);
	void TimeTrialEnd();
};

// 0x98 (0x2F0 - 0x258)
// Class ManeaterUI.TutorialInfoWidget
class UTutorialInfoWidget : public UTwBaseWidget
{
public:
	uint8                                        Pad_1030[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         AudioEventInfo;                                    // 0x260(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInvalidationBox*                      Invalidator;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            TutName;                                           // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            Counter;                                           // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class URichTextBlock*                        TutBody;                                           // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTwInputAwareRichTextBlockWidget*      InputText;                                         // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      InAnimation;                                       // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      IdleAnimation;                                     // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UWidgetAnimation*                      OutAnimation;                                      // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1031[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTutorialInfoWidget* GetDefaultObj();

	void TutorialFinished();
	void StopTutorialTimer();
	void StartTutorialTimer();
	void SetObjectiveComplete(enum class ETutorialEventId Objective);
	void SetEnabled(bool _bEnabled);
	void RepeatedTutorialStepCompleted(int32 Numberator, int32 Denomenator);
	void RemoveObjective(enum class ETutorialEventId TutorialEventId);
	void Disable();
	void ClearAllObjectives();
	void AddObjective(enum class ETutorialEventId Objective, struct FME_TutorialEvent& EventData);
};

// 0xE0 (0x338 - 0x258)
// Class ManeaterUI.TutorialObjectiveListEntry
class UTutorialObjectiveListEntry : public UTwBaseWidget
{
public:
	enum class ETutObjectiveStatus               CurrentStatus;                                     // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1032[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FME_TutorialEvent                     ObjectiveData;                                     // 0x260(0xC0)(NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      CompletedAnim;                                     // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UWidgetAnimation*                      ActivatedAnim;                                     // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                            ObjectiveName;                                     // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UTutorialObjectiveListEntry* GetDefaultObj();

};

// 0x58 (0x2B0 - 0x258)
// Class ManeaterUI.TUtorialPopupWidget
class UTUtorialPopupWidget : public UTwBaseWidget
{
public:
	uint8                                        Pad_1037[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         AudioEventDisplayPopup;                            // 0x268(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            Heading;                                           // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBox*                              SizeBox_1;                                         // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBox*                              SizeBox_2;                                         // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBox*                              SizeBox_3;                                         // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBox*                              SizeBox_4;                                         // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USizeBox*                              SizeBox_5;                                         // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseButton*                         TutorialButton_BP;                                 // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1038[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTUtorialPopupWidget* GetDefaultObj();

	void OnTutorialButton_BP_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked);
	void Disable();
};

// 0x70 (0x2D0 - 0x260)
// Class ManeaterUI.TUtorialSinglePopupWidget
class UTUtorialSinglePopupWidget : public UTwBaseModal
{
public:
	uint8                                        Pad_1039[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidgetSwitcher*                       HeadingSwitcher;                                   // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetSwitcher*                       IconSwitcher;                                      // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidgetSwitcher*                       DescriptionSwitcher;                               // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTwBaseButton*                         OkButton;                                          // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                         AudioEventDisplayPopup;                            // 0x290(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  NextPageText;                                      // 0x298(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  OkText;                                            // 0x2B0(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_103A[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UTUtorialSinglePopupWidget* GetDefaultObj();

	void OnOkButton_Clicked(const struct FKey& MouseButtonClicked, class UTwClickableWidget* OnWidgetClicked);
};

// 0x158 (0x3F0 - 0x298)
// Class ManeaterUI.VideoSettingsWidget
class UVideoSettingsWidget : public UTwBaseMenuPanel
{
public:
	class UMESettingsStepper*                    WindowModeStepper;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UResolutionSettingsStepper*            ResolutionStepper;                                 // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    QualityStepper;                                    // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    ViewDistanceStepper;                               // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    ShadowsStepper;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    AATypeStepper;                                     // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    TexturesStepper;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    EffectsStepper;                                    // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    PostProcessingStepper;                             // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    VsyncStepper;                                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    BrightnessStepper;                                 // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMESettingsStepper*                    FoliageStepper;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  ResetDefaultKey;                                   // 0x2F8(0x18)(Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  ResetDefaultControllerInput;                       // 0x310(0x18)(Edit, DisableEditOnInstance, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  ResetDefaultModalSubject;                          // 0x328(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  ResetDefaultModalTitle;                            // 0x340(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  ResetDefaultModalYes;                              // 0x358(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  ResetDefaultModalCancel;                           // 0x370(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  ConfirmDefaultModalSubject;                        // 0x388(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  ConfirmDefaultModalTitle;                          // 0x3A0(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  ConfirmDefaultModalYes;                            // 0x3B8(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  ConfirmDefaultModalCancel;                         // 0x3D0(0x18)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1045[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVideoSettingsWidget* GetDefaultObj();

	void OnWindowModeChanged(int32 Index);
	void OnResolutionChanged(int32 Index);
	void OnQualityChanged(int32 Index);
	void OnOptionChanged(int32 Index);
};

// 0x178 (0x420 - 0x2A8)
// Class ManeaterUI.WorldMapWidget
class UWorldMapWidget : public UMapWidget
{
public:
	uint8                                        Pad_104A[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlay*                              MapMarkerOverlay;                                  // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_104B[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UMapMarkerWidget>          MapMarkerWidgetClass;                              // 0x308(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UObjectiveMapMarkerWidget> ObjectiveMapMarkerWidgetClass;                     // 0x310(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class ULandmarkMapMarkerWidget>  LandmarkMapMarkerWidgetClass;                      // 0x318(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UBountyBoatMapMarkerWidget> BountyBoatMapMarkerWidgetClass;                    // 0x320(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UPlayerWaypointMapMarkerWidget> PlayerWaypointWidgetClass;                         // 0x328(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UGrottoMapMarkerWidget>    GrottoMapMarkerWidgetClass;                        // 0x330(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UMapMarkerWidget>          ScalyPeteMapMarkerWidgetClass;                     // 0x338(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UTeleporterMapMarkerWidget> TeleporterMapMarkerWidgetClass;                    // 0x340(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UTeleporterMapMarkerWidget*>    TeleporterWidgets;                                 // 0x348(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         AudioEventZoomIn;                                  // 0x358(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         AudioEventZoomOut;                                 // 0x360(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         AudioEventOutlineAppear;                           // 0x368(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         AudioEventWaypointPlacement;                       // 0x370(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAkAudioEvent*                         AudioEventWaypointRemoved;                         // 0x378(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UBountyBoatMapMarkerWidget*>    BountyBoatMapMarkers;                              // 0x380(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMapMarkerWidget*                      PlayerLocationMapMarker;                           // 0x390(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UPlayerWaypointMapMarkerWidget*        PlayerWaypointMapMarker;                           // 0x398(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TWeakObjectPtr<class UMapMarkerWidget>> AllMarkers;                                        // 0x3A0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UMapMarkerWidget*>              MapMarkerWidgets;                                  // 0x3B0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MapMarkerSnapDistance;                             // 0x3C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UMapMarkerWidget>       HoveredMapMarkerWidget;                            // 0x3C4(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_104D[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UOverlay*                              RegionInfoOverlay;                                 // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EWorldRegion                      HoveredRegion;                                     // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_104E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRegionData>                   Regions;                                           // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class URegionInfoWidget*>             RegionInfoWidgets;                                 // 0x3F8(0x10)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_104F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    WorldMapMaterial;                                  // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1050[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWorldMapWidget* GetDefaultObj();

	void UpdateRegionInfoWidgets();
	void SetDataForRegions(TArray<struct FRegionData>& RegionData);
	void SetDataForRegion(struct FRegionData& RegionData);
	void OnRegionDataChanged();
	void OnObjectiveTrackEvent(class UME_PlayerObjective* PlayerObjective, bool bShouldTrack, bool bNoTrackerUpdate);
	void OnInputDeviceChanged(enum class EUserInputDevice Device);
};

}


