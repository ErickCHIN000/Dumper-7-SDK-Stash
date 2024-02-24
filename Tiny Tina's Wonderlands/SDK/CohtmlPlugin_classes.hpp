#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class CohtmlPlugin.CohtmlAssetReferencer
class UCohtmlAssetReferencer : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCohtmlAssetReferencer* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class CohtmlPlugin.CohtmlAtlasContainedTextures
class UCohtmlAtlasContainedTextures : public UObject
{
public:
	TSet<class UTexture2D*>                      Textures;                                          // 0x28(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCohtmlAtlasContainedTextures* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class CohtmlPlugin.CohtmlTextureAtlasDetails
class UCohtmlTextureAtlasDetails : public UObject
{
public:
	class FString                                AtlasPath;                                         // 0x28(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x38(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x3C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PixelFormat;                                       // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxAtlasWidth;                                     // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxAtlasHeight;                                    // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxTextureWidth;                                   // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxTextureHeight;                                  // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCohtmlTextureAtlasDetails* GetDefaultObj();

};

// 0x308 (0x330 - 0x28)
// Class CohtmlPlugin.CohtmlAudioWrapper
class UCohtmlAudioWrapper : public UObject
{
public:
	class UObject*                               Owner;                                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<int32, struct FCohtmlSound>             Sounds;                                            // 0x30(0x50)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6F[0x2B0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCohtmlAudioWrapper* GetDefaultObj();

};

// 0xD0 (0x248 - 0x178)
// Class CohtmlPlugin.CohtmlBaseComponent
class UCohtmlBaseComponent : public UActorComponent
{
public:
	UMulticastDelegateProperty_                  ReadyForBindings;                                  // 0x178(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  BindingsReleased;                                  // 0x188(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  ScriptingReady;                                    // 0x198(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    PreloadedTextures;                                 // 0x1A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bEnableComplexCSSSupport;                          // 0x1B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UTextureRenderTarget2D*                Texture;                                           // 0x1C0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureFilter                    Filter;                                            // 0x1C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReceiveInput;                                     // 0x1C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDelayedUpdate;                                    // 0x1CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseWideColorTextures;                             // 0x1CB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC[0x1C];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCohtmlAudioWrapper*                   AudioWrapper;                                      // 0x1E8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_BD[0x58];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCohtmlBaseComponent* GetDefaultObj();

	void UpdateWholeDataModelFromStruct(class UStructProperty* Struct);
	void UpdateWholeDataModelFromObject(class UObject* Model);
	void TriggerJSEvent(const class FString& Name, class UCohtmlJSEvent* EventData);
	void SynchronizeModels();
	void ShowPaintRects(bool Show);
	void SetSoundAttenuation(struct FSoundAttenuationSettings& Settings);
	void Resize(int32 Width, int32 Height);
	bool RemovePreloadedTextureFromPath(const class FString& AssetPath);
	bool RemovePreloadedTexture(class UTexture2D* Texture);
	void RemoveDataModelFromStruct(class UStructProperty* Struct);
	void RemoveDataModelFromObject(class UObject* Model);
	void RemoveAllPreloadedTextures();
	void Reload();
	void PreloadTextureSync(const class FString& AssetPath);
	void PreloadTextureAsync(const class FString& AssetPath);
	void Load(const class FString& Path);
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool HasRequestedView();
	void EndDebugFrameSave();
	void EnableRendering(bool bEnabled);
	void EnableDelayedUpdate(bool bEnabled);
	void DebugSaveNextFrame();
	class UCohtmlJSEvent* CreateJSEvent();
	void CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Arg);
	void CreateDataModelFromObject(const class FString& Name, class UObject* Model);
	void BeginDebugFrameSave();
	void AddPreloadedTexture(class UTexture2D* Texture);
};

// 0x0 (0x28 - 0x28)
// Class CohtmlPlugin.CohtmlBlueprintFunctionLibrary
class UCohtmlBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UCohtmlBlueprintFunctionLibrary* GetDefaultObj();

	void TriggerJSEvent(class UCohtmlBaseComponent* Component, const class FString& EventName, class UCohtmlJSEvent* JSEvent);
	class UCohtmlJSEvent* CreateJSEvent(class UObject* WorldContextObject);
	void AddStructArg(class UCohtmlJSEvent* JSEvent, class UStructProperty* Arg);
	void AddString(class UCohtmlJSEvent* JSEvent, const class FString& Arg);
	void AddObject(class UCohtmlJSEvent* JSEvent, class UObject* Arg);
	void AddInt32(class UCohtmlJSEvent* JSEvent, int32 Arg);
	void AddFloat(class UCohtmlJSEvent* JSEvent, float Arg);
	void AddByte(class UCohtmlJSEvent* JSEvent, uint8 Arg);
	void AddBool(class UCohtmlJSEvent* JSEvent, bool Arg);
	void AddArrayOfStructs(class UCohtmlJSEvent* JSEvent, TArray<int32>& Arg);
	void AddArray(class UCohtmlJSEvent* JSEvent, TArray<int32>& Arg, int32 ArrayType);
};

// 0x38 (0x280 - 0x248)
// Class CohtmlPlugin.CohtmlComponent
class UCohtmlComponent : public UCohtmlBaseComponent
{
public:
	class FString                                URL;                                               // 0x248(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x258(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x25C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ManualTexture;                                     // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F4[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PrimitiveName;                                     // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F5[0x10];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCohtmlComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CohtmlPlugin.CohtmlEventHelpers
class UCohtmlEventHelpers : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCohtmlEventHelpers* GetDefaultObj();

};

// 0xA8 (0x620 - 0x578)
// Class CohtmlPlugin.CohtmlGameHUD
class ACohtmlGameHUD : public AHUD
{
public:
	class UCohtmlHUD*                            CohtmlHUD;                                         // 0x578(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCohtmlHUD*                            CohtmlHUDInternal;                                 // 0x580(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_101[0x98];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACohtmlGameHUD* GetDefaultObj();

	void SetupView(const class FString& PageUrl, bool bEnableComplexCSSSupport, bool bDelayedUpdate, bool bUseWideColorTextures);
};

// 0x30 (0x278 - 0x248)
// Class CohtmlPlugin.CohtmlHUD
class UCohtmlHUD : public UCohtmlBaseComponent
{
public:
	struct FSoftObjectPath                       HUDMaterialName;                                   // 0x248(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                             HUDMaterial;                                       // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceDynamic*              HUDMaterialInstance;                               // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_105[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCohtmlHUD* GetDefaultObj();

};

// 0x58 (0x4B0 - 0x458)
// Class CohtmlPlugin.CohtmlInputActor
class ACohtmlInputActor : public AActor
{
public:
	UMulticastDelegateProperty_                  OnCohtmlInputActorMouseButtonDown;                 // 0x458(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCohtmlInputActorMouseButtonUp;                   // 0x468(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCohtmlInputActorKeyDown;                         // 0x478(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  OnCohtmlInputActorKeyUp;                           // 0x488(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_11B[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACohtmlInputActor* GetDefaultObj();

	void ToggleCohtmlInputFocus();
	void SetLineTraceMode(enum class ECohtmlInputWidgetLineTraceMode Mode);
	void SetInputPropagationBehaviour(enum class ECohtmlInputPropagationBehaviour Propagation);
	void SetCohtmlViewFocus(class UCohtmlBaseComponent* NewFocusedView);
	void SetCohtmlInputFocus(bool FocusUI);
	bool IsCohtmlFocused();
	void Initialize(enum class ECollisionChannel CollisionChannel, enum class ETextureAddress AddressMode, enum class ECohtmlInputWidgetRaycastQuality RaycastQuality, int32 UVChannel);
	enum class ECohtmlInputPropagationBehaviour GetInputPropagationBehaviour();
	void AlwaysAcceptMouseInput(bool bAccept);
};

// 0x90 (0xB8 - 0x28)
// Class CohtmlPlugin.CohtmlJSEvent
class UCohtmlJSEvent : public UObject
{
public:
	uint8                                        Pad_127[0x80];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStruct*>                       StructTypes;                                       // 0xA8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCohtmlJSEvent* GetDefaultObj();

	void AddText(class FText& Text);
	void AddStructArg(class UStructProperty* Arg);
	void AddString(const class FString& Str);
	void AddObject(class UObject* Object);
	void AddName(class FName& Name);
	void AddInt32(int32 Integer);
	void AddFloat(float Fl);
	void AddByte(uint8 byte);
	void AddBool(bool B);
	void AddArray(TArray<int32>& Array);
};

// 0xA8 (0xD0 - 0x28)
// Class CohtmlPlugin.CohtmlSettings
class UCohtmlSettings : public UObject
{
public:
	bool                                         EnableLiveReload;                                  // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DevToolsPort;                                      // 0x2C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableLocalization;                                // 0x30(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableBreakIterator;                               // 0x31(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HandleInputOnHTMLBody;                             // 0x32(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12C[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        InputTransparentCssClasses;                        // 0x38(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TArray<class FString>                        InputTransparentCssClassesWithChildren;            // 0x48(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         SetDefaultVKTextLayoutToAlphaNumeric;              // 0x58(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScrollDelta;                                       // 0x5C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowWarningsOnScreen;                              // 0x60(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECohtmlSettingsSeverity           LogSeverity;                                       // 0x61(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRespectTitleSafeZone;                             // 0x62(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRespectLetterboxing;                              // 0x63(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         TickWhileGameIsPaused;                             // 0x64(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLowerCaseNamesForAutoExposedProperties;        // 0x65(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECohtmlMSAA                       MSAA;                                              // 0x66(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12F[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSingleFormatFallbacks>        FallbacksForAllFormats;                            // 0x68(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FString                                DefaultStyleFontFamily;                            // 0x78(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AsynchronousResourceRequestCalls;                  // 0x88(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseInputPreprocessor;                             // 0x89(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_130[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FResourceHostPair>             ResourceHostMapping;                               // 0x90(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint32                                       ShadowCacheCount;                                  // 0xA0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       PathsCacheCount;                                   // 0xA4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       TexturesCacheCount;                                // 0xA8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       TexturesByteCacheSize;                             // 0xAC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ScratchLayersByteCacheSize;                        // 0xB0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ScratchTexturesByteCacheSize;                      // 0xB4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FProtocolPathDef>              ProtocolPathDefs;                                  // 0xB8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                        Pad_131[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCohtmlSettings* GetDefaultObj();

};

// 0x40 (0x498 - 0x458)
// Class CohtmlPlugin.CohtmlSystem
class ACohtmlSystem : public AActor
{
public:
	uint8                                        Pad_134[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ACohtmlSystem* GetDefaultObj();

};

// 0x100 (0x200 - 0x100)
// Class CohtmlPlugin.CohtmlWidget
class UCohtmlWidget : public UWidget
{
public:
	uint8                                        Pad_152[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Owner;                                             // 0x118(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  ReadyForBindings;                                  // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  BindingsReleased;                                  // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastDelegateProperty_                  ScriptingReady;                                    // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bEnableComplexCSSSupport;                          // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureFilter                    Filter;                                            // 0x151(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReceiveInput;                                     // 0x152(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECohtmlInputPropagationBehaviour  InputPropagationBehaviour;                         // 0x153(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGammaCorrectedMaterial;                           // 0x154(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseWideColorTextures;                             // 0x155(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_154[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TickPeriodInMinimizedGame;                         // 0x158(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTexture2D*>                    PreloadedTextures;                                 // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class UCohtmlAudioWrapper*                   AudioWrapper;                                      // 0x170(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_156[0x78];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                URL;                                               // 0x1F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCohtmlWidget* GetDefaultObj();

	void UpdateWholeDataModelFromStruct(class UStructProperty* Struct);
	void UpdateWholeDataModelFromObject(class UObject* Model);
	void TriggerJSEvent(const class FString& Name, class UCohtmlJSEvent* EventData);
	void SynchronizeModels();
	void ShowPaintRects(bool Show);
	void SetSoundAttenuation(struct FSoundAttenuationSettings& Settings);
	void SetInputPropagationBehaviour(enum class ECohtmlInputPropagationBehaviour Propagation);
	bool RemovePreloadedTextureFromPath(const class FString& AssetPath);
	bool RemovePreloadedTexture(class UTexture2D* Texture);
	void RemoveDataModelFromStruct(class UStructProperty* Struct);
	void RemoveDataModelFromObject(class UObject* Model);
	void RemoveAllPreloadedTextures();
	void Reload();
	void PreloadTextureSync(const class FString& AssetPath);
	void PreloadTextureAsync(const class FString& AssetPath);
	void Load(const class FString& Path);
	bool IsReadyToCreateView();
	bool IsReadyForBindings();
	bool HasRequestedView();
	class UTextureRenderTarget2D* GetRenderTexture();
	enum class ECohtmlInputPropagationBehaviour GetInputPropagationBehaviour();
	class UCohtmlJSEvent* CreateJSEvent();
	void CreateDataModelFromStruct(const class FString& Name, class UStructProperty* Struct);
	void CreateDataModelFromObject(const class FString& Name, class UObject* Model);
	void AddPreloadedTexture(class UTexture2D* Texture);
};

// 0x0 (0x248 - 0x248)
// Class CohtmlPlugin.HummingbirdBaseComponent
class UHummingbirdBaseComponent : public UCohtmlBaseComponent
{
public:

	static class UClass* StaticClass();
	static class UHummingbirdBaseComponent* GetDefaultObj();

};

// 0x0 (0x280 - 0x280)
// Class CohtmlPlugin.HummingbirdComponent
class UHummingbirdComponent : public UCohtmlComponent
{
public:

	static class UClass* StaticClass();
	static class UHummingbirdComponent* GetDefaultObj();

};

// 0x0 (0x620 - 0x620)
// Class CohtmlPlugin.HummingbirdGameHUD
class AHummingbirdGameHUD : public ACohtmlGameHUD
{
public:

	static class UClass* StaticClass();
	static class AHummingbirdGameHUD* GetDefaultObj();

};

// 0x0 (0x278 - 0x278)
// Class CohtmlPlugin.HummingbirdHUD
class UHummingbirdHUD : public UCohtmlHUD
{
public:

	static class UClass* StaticClass();
	static class UHummingbirdHUD* GetDefaultObj();

};

// 0x0 (0x4B0 - 0x4B0)
// Class CohtmlPlugin.HummingbirdInputActor
class AHummingbirdInputActor : public ACohtmlInputActor
{
public:

	static class UClass* StaticClass();
	static class AHummingbirdInputActor* GetDefaultObj();

};

// 0x0 (0x498 - 0x498)
// Class CohtmlPlugin.HummingbirdSystem
class AHummingbirdSystem : public ACohtmlSystem
{
public:

	static class UClass* StaticClass();
	static class AHummingbirdSystem* GetDefaultObj();

};

}


