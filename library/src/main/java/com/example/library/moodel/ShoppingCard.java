package com.example.library.moodel;

import lombok.Getter;
import lombok.Setter;

import javax.persistence.Entity;
import javax.persistence.ManyToOne;
import javax.persistence.OneToMany;
import javax.persistence.Table;

@Entity
@Getter
@Setter
@Table(schema = SchemaName.SchemaName)
public class ShoppingCard extends BaseEntity{

    @ManyToOne
    private Book book;

    private int count;
    @ManyToOne
    private Factor factor;


}
