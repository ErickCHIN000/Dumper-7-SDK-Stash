#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2A8 - 0x2A0)
// Class Text3D.Text3DActor
class AText3DActor : public AActor
{
public:
	class UText3DComponent*                      Text3DComponent;                                   // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class AText3DActor* GetDefaultObj();

};

// 0xB8 (0x360 - 0x2A8)
// Class Text3D.Text3DCharacterTransform
class UText3DCharacterTransform : public USceneComponent
{
public:
	bool                                         bLocationEnabled;                                  // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1714[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LocationProgress;                                  // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EText3DCharacterEffectOrder       LocationOrder;                                     // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1718[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LocationRange;                                     // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocationDistance;                                  // 0x2B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScaleEnabled;                                     // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1721[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScaleProgress;                                     // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EText3DCharacterEffectOrder       ScaleOrder;                                        // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1728[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScaleRange;                                        // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ScaleBegin;                                        // 0x2E0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ScaleEnd;                                          // 0x2F8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRotateEnabled;                                    // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1732[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RotateProgress;                                    // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EText3DCharacterEffectOrder       RotateOrder;                                       // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_173C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RotateRange;                                       // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotateBegin;                                       // 0x320(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              RotateEnd;                                         // 0x338(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_173E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UText3DCharacterTransform* GetDefaultObj();

	void SetScaleRange(float Range);
	void SetScaleProgress(float Progress);
	void SetScaleOrder(enum class EText3DCharacterEffectOrder Order);
	void SetScaleEnd(const struct FVector& Value);
	void SetScaleEnabled(bool bEnabled);
	void SetScaleBegin(const struct FVector& Value);
	void SetRotateRange(float Range);
	void SetRotateProgress(float Progress);
	void SetRotateOrder(enum class EText3DCharacterEffectOrder Order);
	void SetRotateEnd(const struct FRotator& Value);
	void SetRotateEnabled(bool bEnabled);
	void SetRotateBegin(const struct FRotator& Value);
	void SetLocationRange(float Range);
	void SetLocationProgress(float Progress);
	void SetLocationOrder(enum class EText3DCharacterEffectOrder Order);
	void SetLocationEnabled(bool bEnabled);
	void SetLocationDistance(const struct FVector& Distance);
};

// 0x138 (0x3E0 - 0x2A8)
// Class Text3D.Text3DComponent
class UText3DComponent : public USceneComponent
{
public:
	bool                                         bRefreshOnChange;                                  // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B32[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x2B0(0x18)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	float                                        Extrude;                                           // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Bevel;                                             // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EText3DBevelType                  BevelType;                                         // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B3D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BevelSegments;                                     // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOutline;                                          // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B44[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OutlineExpand;                                     // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    FrontMaterial;                                     // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    BevelMaterial;                                     // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    ExtrudeMaterial;                                   // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    BackMaterial;                                      // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFont*                                 Font;                                              // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EText3DHorizontalTextAlignment    HorizontalAlignment;                               // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EText3DVerticalTextAlignment      VerticalAlignment;                                 // 0x309(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B5D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Kerning;                                           // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LineSpacing;                                       // 0x310(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WordSpacing;                                       // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasMaxWidth;                                      // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B69[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxWidth;                                          // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasMaxHeight;                                     // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B6F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxHeight;                                         // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bScaleProportionally;                              // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCastShadow;                                       // 0x329(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B76[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       TextRoot;                                          // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            TextGeneratedDelegate;                             // 0x338(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B84[0x78];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USceneComponent*>               CharacterKernings;                                 // 0x3C0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UStaticMeshComponent*>          CharacterMeshes;                                   // 0x3D0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UText3DComponent* GetDefaultObj();

	void TextGenerated__DelegateSignature();
	void SetWordSpacing(float Value);
	void SetVerticalAlignment(enum class EText3DVerticalTextAlignment Value);
	void SetText(class FText& Value);
	void SetScaleProportionally(bool Value);
	void SetOutlineExpand(float Value);
	void SetMaxWidth(float Value);
	void SetMaxHeight(float Value);
	void SetLineSpacing(float Value);
	void SetKerning(float Value);
	void SetHorizontalAlignment(enum class EText3DHorizontalTextAlignment Value);
	void SetHasOutline(bool bValue);
	void SetHasMaxWidth(bool Value);
	void SetHasMaxHeight(bool Value);
	void SetFrontMaterial(class UMaterialInterface* Value);
	void SetFreeze(bool bFreeze);
	void SetFont(class UFont* InFont);
	void SetExtrudeMaterial(class UMaterialInterface* Value);
	void SetExtrude(float Value);
	void SetCastShadow(bool NewCastShadow);
	void SetBevelType(enum class EText3DBevelType Value);
	void SetBevelSegments(int32 Value);
	void SetBevelMaterial(class UMaterialInterface* Value);
	void SetBevel(float Value);
	void SetBackMaterial(class UMaterialInterface* Value);
	struct FVector GetTextScale();
	TArray<class UStaticMeshComponent*> GetGlyphMeshComponents();
	class UStaticMeshComponent* GetGlyphMeshComponent(int32 Index);
	TArray<class USceneComponent*> GetGlyphKerningComponents();
	class USceneComponent* GetGlyphKerningComponent(int32 Index);
	int32 GetGlyphCount();
	class FText GetFormattedText();
	void GetBounds(struct FVector* Origin, struct FVector* BoxExtent);
};

// 0x68 (0x98 - 0x30)
// Class Text3D.Text3DEngineSubsystem
class UText3DEngineSubsystem : public UEngineSubsystem
{
public:
	class UMaterial*                             DefaultMaterial;                                   // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<uint32, struct FCachedFontData>         CachedFonts;                                       // 0x38(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1BFC[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UText3DEngineSubsystem* GetDefaultObj();

};

}


