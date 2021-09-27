enum class Entity_type
{
	Undead, Human, Goblin, Animal
};

class BaseStats
{
	float m_Health, m_AttackSpeed, m_Damage;
public:
	BaseStats(float Health, float AttackSpeed, float Damage)
	{
		m_Health = Health;
		m_AttackSpeed = AttackSpeed;
		m_Damage = Damage;
	}

	void LowerHealth(float Amount) {
		m_Health -= Amount;
	}
};

class EntityInterface 
{
protected:
	BaseStats* m_BaseStats;
	Entity_type m_Race;
	bool m_IsDead = false;

public:
	void Dead(bool IsDead) 
	{
		m_IsDead = IsDead;
	}
};

class Player : EntityInterface
{
public:
	const char* m_Name;

	Player(BaseStats* Stats, Entity_type Race, const char* Name)
	{
		m_BaseStats = Stats;
		m_Race = Race;
		m_Name = Name;
	}

};

class Monster : EntityInterface
{
	Monster(BaseStats* Stats, Entity_type Race)
	{
		m_BaseStats = Stats;
		m_Race = Race;
	}
};